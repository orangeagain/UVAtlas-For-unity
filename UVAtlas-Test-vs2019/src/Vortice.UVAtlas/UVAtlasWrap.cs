using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.InteropServices;

    public struct Vector3
    {
        public float x;
        public float y;
        public float z;
    }
    public struct Vector2
    {
        public float x;
        public float y;
    }

public static class VorticeUVAtlasWrap_Win64
{
    public readonly struct PosUV
    {
        public readonly Vector3 Pos;
        public readonly Vector2 UV;

        public PosUV(in Vector3 position, in Vector2 texCoord)
        {
            Pos = position;
            UV = texCoord;
        }
    }
    public struct UVResultManaged
    {
        public Int32 returnCode;

        public Int64 outPosCount;
        public PosUV[] outPosUv;

        public Int64 outTrisCount;
        public UInt32[] outTris;

        //public Int64 outRemapCount;
        //public UInt32[] outRemap;

        public float maxStretch;
        public Int64 numCharts;
    };

    public static unsafe bool GenerateAdjacencyAndPointReps_Wrap(
    uint[] indices,
    Vector3[] positions, out uint[] adj,
    float epsilon = 0.0f)
    {
        fixed (uint* indicesPtr = indices)
            fixed (Vector3* positionsPtr = positions)
            {
                adj = new uint[indices.Length];
                fixed (uint* adjPtr = adj)
                {
                    Int32 code = ComputeAdj(
                        indicesPtr, indices.Length/3,
                        positionsPtr, positions.Length,
                        epsilon,
                        adjPtr);

                    if (code < 0)
                    {
                        Console.WriteLine("ComputeAdjErrorCode:" + code);
                        return false;
                    }
                    else
                        return true;
                }
            }        
    }
    public static bool Create(
            Vector3[] positions,
            uint[] tris,
            uint[] adjacency,
            out UVResultManaged uVResult,
            int maxChartNumber = 0, float maxStretch = 0.16667f, float gutter = 2.0f,
            int width = 512, int height = 512,
            float callbackFrequency = 0.1f,
            UVATLASoptions options = UVATLASoptions.UVATLAS_DEFAULT)
    {
        unsafe
        {
            Debug.Assert(VorticeUVAtlasWrap_Win64.UVResultTemp_Size() == sizeof(VorticeUVAtlasWrap_Win64.UVResultTemp),
                "UVResultTemp的托管非托管内存大小不一样!");
            Debug.Assert(VorticeUVAtlasWrap_Win64.UVAtlasVertex_Size() == sizeof(VorticeUVAtlasWrap_Win64.PosUV),
                "PosUV->的托管非托管内存大小不一样!");
            Debug.Assert(tris.Length == adjacency.Length);
            Console.WriteLine("输入positions："+ positions.Length);

            fixed (Vector3* positionsPtr = &positions[0])
            {
                fixed (uint* indicesPtr = &tris[0])
                {
                    fixed (uint* adjacencyPtr = &adjacency[0])
                    {
                        UVResultTemp* uvResultTemp = ComputeUV(
                            positionsPtr, positions.Length,
                            indicesPtr, tris.Length/3,
                            maxChartNumber, maxStretch,
                            width, height, gutter,
                            adjacencyPtr,
                            options);

                        uVResult = new UVResultManaged();
                        uVResult.returnCode = uvResultTemp->returnCode;

                        if (uvResultTemp->returnCode < 0)
                        {
                            Console.WriteLine("ComputeUV()ERROR CODE:"+ uvResultTemp->returnCode);
                            return false;
                        }

                        uVResult.maxStretch = uvResultTemp->maxStretch;
                        uVResult.numCharts = uvResultTemp->numCharts;
                        uVResult.outPosCount = uvResultTemp->outPosCount;
                        uVResult.outTrisCount = uvResultTemp->outTrisCount;
                        //uVResult.outRemapCount = uvResultTemp->outRemapCount;

                        //Debug.Assert(uVResult.outRemapCount == uVResult.outPosCount);

                        uVResult.outPosUv = new PosUV[uVResult.outPosCount];
                        uVResult.outTris = new UInt32[uVResult.outTrisCount];
                        //uVResult.outRemap = new UInt32[uVResult.outRemapCount];

                        ByteCopy(uVResult.outPosUv, uvResultTemp->outPosUvPtr, uVResult.outPosCount);
                        ByteCopy(uVResult.outTris, uvResultTemp->outTrisPtr, uVResult.outTrisCount);
                        //Write(uVResult.outRemap, uvResultTemp->outRemapPtr, uVResult.outRemapCount);

                        Console.WriteLine("outTrisCount:" + uVResult.outTrisCount + "|outPosCount:" + uVResult.outPosCount);

                        //string PosUvStr = null;
                        //foreach (var i in uVResult.outPosUv)
                        //    PosUvStr = PosUvStr + i.UV.x + ",";
                        //Console.WriteLine("PosUv:" + PosUvStr);

                        //string triStr = null;
                        //foreach (var i in uVResult.outTris)
                        //    triStr = triStr + i + ",";
                        //Console.WriteLine("triStr:" + triStr);

                        UVResultTemp_Clean(uvResultTemp);
                        //Debug.Assert(uvResultTemp->outTrisCount == );
                        return true;
                    }
                }
            }
        }
    }

    public static unsafe void ByteCopy<T>(T[] destination, void* data, long desCount) where T : unmanaged
    {
        fixed (void* destinationPtr = destination)
        {
            long bytesCount = desCount * sizeof(T);
            Buffer.MemoryCopy(data, destinationPtr, bytesCount, bytesCount);
        }
    }


    public const string UVAtlasDll = "UVAtlas";
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int uint32_t_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int HRESULT_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int size_t_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int long_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int UVAtlasVertex_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int ptr_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int XMFLOAT3_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int uint8_t_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int UVResultTemp_Size();
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    public unsafe static extern int UVATLAS_options_Size();

    public enum UVATLASoptions : uint
    {
        UVATLAS_DEFAULT = 0x00,
        UVATLAS_GEODESIC_FAST = 0x01,
        UVATLAS_GEODESIC_QUALITY = 0x02,
        UVATLAS_LIMIT_MERGE_STRETCH = 0x04,
        UVATLAS_LIMIT_FACE_STRETCH = 0x08,
    };

    [StructLayout(LayoutKind.Sequential)]
    public unsafe readonly struct UVResultTemp
    {
        public readonly Int32 returnCode;

        public readonly Int64 outPosCount;
        public readonly PosUV* outPosUvPtr;

        public readonly Int64 outTrisCount;
        public readonly UInt32* outTrisPtr;

        //public readonly Int64 outRemapCount;
        //public readonly UInt32* outRemapPtr;

        public readonly float maxStretch;
        public readonly Int64 numCharts;
    };
    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    private unsafe static extern Int32 ComputeAdj(
                                        UInt32* indices, Int64 nFaces,
                                        Vector3* positions, Int64 nVerts,
                                        float epsilon,
                                        UInt32* adjacency);

    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    private unsafe static extern UVResultTemp* ComputeUV(
                                        Vector3* positionsPtr, Int64 postCount,
                                        void* trisPtr, Int64 faceCount,//(uint32_t)indices
                                        Int64 maxChartNumber, float maxStretch,
                                        Int64 width, Int64 height, float gutter,
                                        UInt32* inAdjPtr,
                                        UVATLASoptions options);

    [DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
    private unsafe static extern void UVResultTemp_Clean(UVResultTemp* tempResult);
}


//[DllImport(UVAtlasDll, CallingConvention = CallingConvention.Cdecl)]
//private unsafe static extern int Validate(
//    UInt32* indices, nint nFaces,
//    nint nVerts, UInt32* adjacency,
//    VALIDATE_FLAGS flags, IntPtr* msgs
//    );

//public enum VALIDATE_FLAGS : ulong
//{
//    VALIDATE_DEFAULT = 0x0,
//    VALIDATE_BACKFACING = 0x1,// Check for duplicate neighbor from triangle (requires adjacency)
//    VALIDATE_BOWTIES = 0x2,// Check for two fans of triangles using the same vertex (requires adjacency)
//    VALIDATE_DEGENERATE = 0x4,// Check for degenerate triangles
//    VALIDATE_UNUSED = 0x8,// Check for issues with 'unused' triangles
//    VALIDATE_ASYMMETRIC_ADJ = 0x10,// Checks that neighbors are symmetric (requires adjacency)
//};

//public static unsafe bool Validate_Wrap(
//       uint[] indices,
//       UInt32[] adjacency,
//       VALIDATE_FLAGS flags
//       )
//{
//    fixed (uint* indicesPtr = indices)
//    {
//        fixed (UInt32* adjacencyPtr = adjacency)
//        {
//            int result = Validate(
//                indicesPtr, indices.Length / 3,
//                indices.Length / 3,
//                adjacencyPtr,
//                flags, null);

//            if (result >= 0)
//                return true;
//            else
//            {
//                Console.WriteLine("Validate_Wrap:result:" + result);
//                return false;
//            }

//        }
//    }
//}
