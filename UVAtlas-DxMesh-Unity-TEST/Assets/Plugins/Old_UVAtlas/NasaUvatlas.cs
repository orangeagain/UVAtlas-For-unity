using System;
using System.Runtime.InteropServices;
using UnityEngine;

// Token: 0x02000002 RID: 2
public static class NasaUVAtlas
{
	public static bool Old_UVAtlas(Mesh mesh)
	{

		var positions = mesh.vertices;
		var indices = mesh.triangles;

		//UVATLAS.Net(from nuget)
		float[] inX = new float[positions.Length];
		float[] inY = new float[positions.Length];
		float[] inZ = new float[positions.Length];
		for (int i = 0; i < positions.Length; i++)
		{
			inX[i] = positions[i].x;
			inY[i] = positions[i].y;
			inZ[i] = positions[i].z;
		}

		int[] inIndices = new int[indices.Length];
		for (int i = 0; i < indices.Length; i++)
		{
			inIndices[i] = (int)indices[i];
		}

		int maxCharts = 0;
		float maxStretch = 0.1666f;
		float gutter = 0;
		int width = 512;
		int height = 512;
        Quality quality = Quality.UVATLAS_DEFAULT;
		float adjacencyEpsilon = 0;
		ReturnCode code = Atlas(inX, inY, inZ, inIndices,
			out float[] outU, out float[] outV, out int[] outIndices, out int[] outVertexRemap,
			maxCharts, maxStretch, gutter, width, height, quality, adjacencyEpsilon);

		if (code != ReturnCode.SUCCESS)
			return true;
		else
		{
			Debug.LogError("Old_UVAtlas code：" + code);
			return false;
		}
	}

	// Token: 0x06000001 RID: 1
	//[DllImport("UVAtlasLib_x32.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlas")]
	//private unsafe static extern UVAtlas.UVAtlasData* UVAtlas32(UVAtlas.UVAtlasData* data, int maxCharts, float maxStretch, float gutter, int width, int height, UVAtlas.Quality quality, float adjacencyEpsilon, out int returnCode);

	//// Token: 0x06000002 RID: 2
	//[DllImport("UVAtlasLib_x32.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlasData_Destroy")]
	//private unsafe static extern void UVAtlasDestroy32(UVAtlas.UVAtlasData* data);

	// Token: 0x06000003 RID: 3
	[DllImport("UVAtlasLib_x64.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlas")]
	private unsafe static extern NasaUVAtlas.UVAtlasData* UVAtlas64(NasaUVAtlas.UVAtlasData* data, int maxCharts, float maxStretch, float gutter, int width, int height, NasaUVAtlas.Quality quality, float adjacencyEpsilon, out int returnCode);

	// Token: 0x06000004 RID: 4
	[DllImport("UVAtlasLib_x64.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlasData_Destroy")]
	private unsafe static extern void UVAtlasDestroy64(NasaUVAtlas.UVAtlasData* data);

	// Token: 0x06000005 RID: 5 RVA: 0x00002050 File Offset: 0x00000250
	public unsafe static NasaUVAtlas.ReturnCode Atlas(float[] inX, float[] inY, float[] inZ, int[] inIndices, out float[] outU, out float[] outV, out int[] outIndices, out int[] outVertexRemap, int maxCharts = 0, float maxStretch = 0.1666f, float gutter = 2f, int width = 512, int height = 512, NasaUVAtlas.Quality quality = NasaUVAtlas.Quality.UVATLAS_DEFAULT, float adjacencyEpsilon = 0f)
	{
		outU = null;
		outV = null;
		outIndices = null;
		outVertexRemap = null;
		if (inX.Length != inY.Length || inY.Length != inZ.Length)
		{
			throw new ArgumentException("Atlas input vector array length's do not match");
		}
		if (inIndices.Length % 3 != 0)
		{
			throw new ArgumentException("Atlas input indicies not divisible by 3");
		}
		NasaUVAtlas.UVAtlasData uvatlasData = new NasaUVAtlas.UVAtlasData
		{
			numVertices = (uint)inX.Length,
			xs = Marshal.AllocHGlobal(inX.Length * Marshal.SizeOf<float>())
		};
		Marshal.Copy(inX, 0, uvatlasData.xs, inX.Length);
		uvatlasData.ys = Marshal.AllocHGlobal(inX.Length * Marshal.SizeOf<float>());
		Marshal.Copy(inY, 0, uvatlasData.ys, inY.Length);
		uvatlasData.zs = Marshal.AllocHGlobal(inX.Length * Marshal.SizeOf<float>());
		Marshal.Copy(inZ, 0, uvatlasData.zs, inZ.Length);
		uvatlasData.numFaces = (uint)(inIndices.Length / 3);
		uvatlasData.indices = Marshal.AllocHGlobal(inIndices.Length * Marshal.SizeOf<uint>());
		uint* ptr = (uint*)uvatlasData.indices.ToPointer();
		for (int i = 0; i < inIndices.Length; i++)
		{
			ptr[i] = (uint)inIndices[i];
		}
		int num;
		NasaUVAtlas.UVAtlasData* ptr2;
		//if (Environment.Is64BitProcess)
		//{
		ptr2 = NasaUVAtlas.UVAtlas64(&uvatlasData, maxCharts, maxStretch, gutter, width, height, quality, adjacencyEpsilon, out num);
		//}
		//else
		//{
		//	ptr2 = UVAtlas.UVAtlas32(&uvatlasData, maxCharts, maxStretch, gutter, width, height, quality, adjacencyEpsilon, out num);
		//}
		NasaUVAtlas.ReturnCode returnCode = (NasaUVAtlas.ReturnCode)num;
		if (ptr2 == null || returnCode != NasaUVAtlas.ReturnCode.SUCCESS)
		{
			return returnCode;
		}
		outU = new float[ptr2->numVertices];
		outV = new float[ptr2->numVertices];
		outIndices = new int[ptr2->numFaces * 3U];
		outVertexRemap = new int[ptr2->numVertices];
		Marshal.Copy(ptr2->us, outU, 0, outU.Length);
		Marshal.Copy(ptr2->vs, outV, 0, outV.Length);
		Marshal.Copy(ptr2->indices, outIndices, 0, outIndices.Length);
		Marshal.Copy(ptr2->vertexRemap, outVertexRemap, 0, outVertexRemap.Length);
		Marshal.FreeHGlobal(uvatlasData.xs);
		Marshal.FreeHGlobal(uvatlasData.ys);
		Marshal.FreeHGlobal(uvatlasData.zs);
		Marshal.FreeHGlobal(uvatlasData.indices);
		//if (Environment.Is64BitProcess)
		//{
		NasaUVAtlas.UVAtlasDestroy64(ptr2);
		//}
		//else
		//{
		//	UVAtlas.UVAtlasDestroy32(ptr2);
		//}
		return returnCode;
	}

	// Token: 0x04000001 RID: 1
	private const string DLL_NAME = "UVAtlasLib_";

	// Token: 0x02000003 RID: 3
	public enum Quality
	{
		// Token: 0x04000003 RID: 3
		UVATLAS_DEFAULT,
		// Token: 0x04000004 RID: 4
		UVATLAS_GEODESIC_FAST,
		// Token: 0x04000005 RID: 5
		UVATLAS_GEODESIC_QUALITY
	}

	// Token: 0x02000004 RID: 4
	public enum ReturnCode
	{
		// Token: 0x04000007 RID: 7
		SUCCESS,
		// Token: 0x04000008 RID: 8
		UNKNOWN,
		// Token: 0x04000009 RID: 9
		SET_INDEX_FAILED,
		// Token: 0x0400000A RID: 10
		SET_VERTEX_FAILED,
		// Token: 0x0400000B RID: 11
		GENERATE_ADJACENCY_FAILED,
		// Token: 0x0400000C RID: 12
		CREATE_ATLAS_FAILED
	}

	// Token: 0x02000005 RID: 5
	[StructLayout(LayoutKind.Sequential, Pack = 1)]
	public struct UVAtlasData
	{
		// Token: 0x0400000D RID: 13
		public uint numVertices;

		// Token: 0x0400000E RID: 14
		public IntPtr us;

		// Token: 0x0400000F RID: 15
		public IntPtr vs;

		// Token: 0x04000010 RID: 16
		public IntPtr xs;

		// Token: 0x04000011 RID: 17
		public IntPtr ys;

		// Token: 0x04000012 RID: 18
		public IntPtr zs;

		// Token: 0x04000013 RID: 19
		public uint numFaces;

		// Token: 0x04000014 RID: 20
		public IntPtr indices;

		// Token: 0x04000015 RID: 21
		public IntPtr vertexRemap;
	}
}

