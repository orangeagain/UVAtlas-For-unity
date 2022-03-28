using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using Utf8Json;

namespace Vortice.UVAtlas
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("uint32_t_Size:" + VorticeUVAtlasWrap_Win64.uint32_t_Size());
            Console.WriteLine("HRESULT_Size:" + VorticeUVAtlasWrap_Win64.HRESULT_Size());
            Console.WriteLine("size_t_Size:" + VorticeUVAtlasWrap_Win64.size_t_Size());
            Console.WriteLine("long_Size:" + VorticeUVAtlasWrap_Win64.long_Size());
            Console.WriteLine("UVAtlasVertex_Size:" + VorticeUVAtlasWrap_Win64.UVAtlasVertex_Size());
            Console.WriteLine("ptr_Size:" + VorticeUVAtlasWrap_Win64.ptr_Size());
            Console.WriteLine("XMFLOAT3_Size:" + VorticeUVAtlasWrap_Win64.XMFLOAT3_Size());
            Console.WriteLine("uint8_t_Size:" + VorticeUVAtlasWrap_Win64.uint8_t_Size());
            Console.WriteLine("UVResultTemp_Size:" + VorticeUVAtlasWrap_Win64.UVResultTemp_Size());

            unsafe
            {
                Console.WriteLine("managed_UVResultTemp_Size:" + sizeof(VorticeUVAtlasWrap_Win64.UVResultTemp));
            }
            Console.WriteLine();

            var meshSet = LoadMeshSet.GetMeshsOnDisk();
            Console.WriteLine("Load Mesh Count:" + meshSet.Count);

            foreach (var mesh in meshSet)
            {
                Console.WriteLine("Start test mesh:"+ mesh.Key);
                Console.WriteLine("NasaWrap.ComputeUV() Running...");
                bool nasaSuccess = NasaWrap.ComputeUV(mesh.Value.pos, mesh.Value.tris, out int[] outIndices, out int[] outVertexRemap, out Vector2[] outUV);
                Console.WriteLine("memory pass");

                Console.WriteLine("Vortice.ComputeUV Running... on ");
                bool vorticeSuccess = VorticeComputeUV(mesh.Value.pos, (uint[])(object)mesh.Value.tris, out int[] outIndices2, out int[] outVertexRemap2, out Vector2[] outUV2);
                Console.WriteLine("memory pass");

                if (nasaSuccess == false || vorticeSuccess == false)
                    Console.WriteLine("|nasaSuccess:" + nasaSuccess + "|vorticeSuccess:" + vorticeSuccess);
                Console.WriteLine();
            }
        }
        public static bool VorticeComputeUV(Vector3[] inputPos, uint[] indices, out int[] outIndices, out int[] outVertexRemap, out Vector2[] outUV)
        {
            outIndices = null;
            outVertexRemap = null;
            outUV = null;
            if (!VorticeUVAtlasWrap_Win64.GenerateAdjacencyAndPointReps_Wrap(indices, inputPos, out uint[] adj))
            {
                Console.WriteLine("VorticeUVAtlasWrap_Win64.ComputeAdj()Error." + adj.Length);
                return false;
            }

            if (!VorticeUVAtlasWrap_Win64.Create(inputPos, indices, adj, out VorticeUVAtlasWrap_Win64.UVResultManaged uvResult))
            {
                Console.WriteLine("VorticeUVAtlasWrap_Win64.ComputeUV() Error");
                return false;
            }

            //Console.WriteLine("成功:" + uvResult.ResultCode);
            return true;
        }

    }

    public static class NasaWrap {
        public static bool ComputeUV(Vector3[] inputPos, int[] indics, out int[] outIndices, out int[] outVertexRemap,out Vector2[] outUV)
        {
            float[] inX = new float[inputPos.Length];
            float[] inY = new float[inputPos.Length];
            float[] inZ = new float[inputPos.Length];
            for (int i = 0; i < inputPos.Length; i++)
            {
                inX[i] = inputPos[i].x;
                inY[i] = inputPos[i].y;
                inZ[i] = inputPos[i].z;
            }
            int maxCharts = 0;
            float maxStretch = 0.1666f;
            float gutter = 2f;
            int width = 512;
            int height = 512;
            aQuality quality = aQuality.UVATLAS_DEFAULT;
            float adjacencyEpsilon = 0;
            var code = Atlas(inX, inY, inZ, indics,
                out float[] outU, out float[] outV, out outIndices, out outVertexRemap,
                maxCharts, maxStretch, gutter, width, height, quality, adjacencyEpsilon);

            if (code != ReturnCode.SUCCESS)
            {
                Console.WriteLine("nasaWrap RetureFail:"+code);
                outUV = new Vector2[1];
                return false;
            }
            //Console.WriteLine("outIndices == null:" + (outIndices == null));
            //此处应该根据remap生成

            outUV = new Vector2[outVertexRemap.Length];
            //for (int i = 0; i < outIndices.Length; i++)
            //    outUV[i] = new Vector2(outU[i], outV[i]);
            return true;
        }

        // Token: 0x06000001 RID: 1
        //[DllImport("UVAtlasLib_x32.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlas")]
        //private unsafe static extern UVAtlas.UVAtlasData* UVAtlas32(UVAtlas.UVAtlasData* data, int maxCharts, float maxStretch, float gutter, int width, int height, UVAtlas.Quality quality, float adjacencyEpsilon, out int returnCode);

        //// Token: 0x06000002 RID: 2
        //[DllImport("UVAtlasLib_x32.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlasData_Destroy")]
        //private unsafe static extern void UVAtlasDestroy32(UVAtlas.UVAtlasData* data);

        // Token: 0x06000003 RID: 3
        [DllImport("UVAtlasLib_x64.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlas")]
        private unsafe static extern UVAtlasData* UVAtlas64(UVAtlasData* data, int maxCharts, float maxStretch, float gutter, int width, int height, aQuality quality, float adjacencyEpsilon, out int returnCode);

        // Token: 0x06000004 RID: 4
        [DllImport("UVAtlasLib_x64.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "UVAtlasData_Destroy")]
        private unsafe static extern void UVAtlasDestroy64(UVAtlasData* data);

        // Token: 0x06000005 RID: 5 RVA: 0x00002050 File Offset: 0x00000250
        public unsafe static ReturnCode Atlas(float[] inX, float[] inY, float[] inZ, int[] inIndices, out float[] outU, out float[] outV, out int[] outIndices, out int[] outVertexRemap, int maxCharts = 0, float maxStretch = 0.1666f, float gutter = 2f, int width = 512, int height = 512, aQuality quality = aQuality.UVATLAS_DEFAULT, float adjacencyEpsilon = 0f)
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
            UVAtlasData uvatlasData = new UVAtlasData
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
            UVAtlasData* ptr2;
            //if (Environment.Is64BitProcess)
            //{
            ptr2 = UVAtlas64(&uvatlasData, maxCharts, maxStretch, gutter, width, height, quality, adjacencyEpsilon, out num);
            //}
            //else
            //{
            //	ptr2 = UVAtlas.UVAtlas32(&uvatlasData, maxCharts, maxStretch, gutter, width, height, quality, adjacencyEpsilon, out num);
            //}
            ReturnCode returnCode = (ReturnCode)num;
            if (ptr2 == null || returnCode != ReturnCode.SUCCESS)
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
            UVAtlasDestroy64(ptr2);
            //}
            //else
            //{
            //	UVAtlas.UVAtlasDestroy32(ptr2);
            //}
            return returnCode;
        }

        // Token: 0x04000001 RID: 1
        //private const string DLL_NAME = "UVAtlasLib_";

        // Token: 0x02000003 RID: 3
        public enum aQuality
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

    public struct MeshJsonFile
    {
        public Vector3[] pos;
        public int[] tris;
    }
    public static class LoadMeshSet
    {

        public static Dictionary<string, MeshJsonFile> GetMeshsOnDisk()
        {

            Dictionary<string, MeshJsonFile> meshSet = new Dictionary<string, MeshJsonFile>();
            var jsonBytes = Directory.GetFiles("MeshSet");

            foreach (var js in jsonBytes)
            {
                var meshObj = JsonSerializer.Deserialize<MeshJsonFile>(File.ReadAllBytes(js));
                //Console.WriteLine("Load Faces:"+ meshObj.pos.Length/3);
                meshSet.Add(js, meshObj);
            }
            return meshSet;
        }
    }
}
