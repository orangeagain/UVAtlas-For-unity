#include "pch.h"
#include "DirectXMesh.h"
#include "UVAtlas.h"
using namespace DirectX;

#if defined(_MSC_VER)
#   define EXPORT_C_API __declspec(dllexport)
#else
#	define EXPORT_C_API __attribute__((visibility("default")))
#endif

struct UVResultTemp
{
    HRESULT                 returnCode;

    size_t                  outPosCount;
    UVAtlasVertex* outPosUvPtr;

    size_t                  outTrisU32Count;
    uint32_t* outTrisPtr;

    //size_t                  outRemapCount;
    //uint32_t* outRemapPtr;

    float                   maxStretch;
    size_t                  numCharts;
};

extern "C" {

    EXPORT_C_API HRESULT __cdecl ComputeAdj(
        const uint32_t* indices, size_t nFaces,
        const XMFLOAT3* positions, size_t nVerts,
        float epsilon,
        uint32_t* adjacency)
    {
        return GenerateAdjacencyAndPointReps(indices, nFaces, positions, nVerts, epsilon, nullptr, adjacency);
    }

    EXPORT_C_API UVResultTemp* __cdecl ComputeUV(
        const XMFLOAT3* positionsPtr, size_t postCount,
        const void* trisPtr, size_t faceCount,//(uint32_t)indices
        size_t maxChartNumber, float maxStretch,
        size_t width, size_t height, float gutter,
        const uint32_t* inOutAdjPtr,
        UVATLAS options)
    {
        std::vector<UVAtlasVertex> tempoutPosUv;
        std::vector<uint8_t>    tempoutTris;
        //std::vector<uint32_t>   tempoutRemap;
        //float                   tempmaxStretch;
        //size_t                  tempnumCharts;
        HRESULT                 tempReturnCode;

        //std::vector<uint32_t>    temppvFacePartitioning;

        tempReturnCode = UVAtlasCreate(
            positionsPtr, postCount,
            trisPtr, DXGI_FORMAT_R32_UINT, faceCount,
            maxChartNumber, maxStretch,
            width, height,
            gutter,
            inOutAdjPtr,
            nullptr,
            nullptr,
            nullptr,
            0.01f,
            options,
            tempoutPosUv,
            tempoutTris);

        UVResultTemp* uVResultTemp = new UVResultTemp();
        uVResultTemp->returnCode = tempReturnCode;

        if (FAILED(uVResultTemp->returnCode))
            return uVResultTemp;

        //uVResultTemp->maxStretch = tempmaxStretch;
        //uVResultTemp->numCharts = tempnumCharts;
        //uVResultTemp->outRemapCount = tempoutRemap.size();
        //uVResultTemp->outRemapPtr = new uint32_t[uVResultTemp->outRemapCount];
        //auto newIB = reinterpret_cast<const uint32_t*>(&tempoutTris.front());
        //std::copy(tempoutRemap.begin(), tempoutRemap.end(), uVResultTemp->outRemapPtr);

        uVResultTemp->outPosCount = tempoutPosUv.size();
        uVResultTemp->outTrisU32Count = tempoutTris.size() / 4;

        uVResultTemp->outPosUvPtr = new UVAtlasVertex[uVResultTemp->outPosCount];
        std::copy(tempoutPosUv.begin(), tempoutPosUv.end(), uVResultTemp->outPosUvPtr);

        uVResultTemp->outTrisPtr = new uint32_t[uVResultTemp->outTrisU32Count];
        memcpy(uVResultTemp->outTrisPtr, &tempoutTris[0], uVResultTemp->outTrisU32Count * 4);
        return uVResultTemp;
    }

    EXPORT_C_API void __cdecl UVResultTemp_Clean(UVResultTemp* result)
    {
        //delete[] result->outRemapPtr;
        delete[] result->outTrisPtr;
        delete[] result->outPosUvPtr;
        delete result;
        result = nullptr;
    }

    EXPORT_C_API int __cdecl uint32_t_Size() {
        return sizeof(uint32_t);
    }
    EXPORT_C_API int __cdecl HRESULT_Size() {
        return sizeof(HRESULT);
    }
    EXPORT_C_API int __cdecl size_t_Size() {
        return sizeof(size_t);
    }
    EXPORT_C_API int __cdecl long_Size() {
        return sizeof(long);
    }
    EXPORT_C_API int __cdecl UVAtlasVertex_Size() {
        return sizeof(UVAtlasVertex);
    }
    EXPORT_C_API int __cdecl ptr_Size() {
        return sizeof(nullptr);
    }
    EXPORT_C_API int __cdecl XMFLOAT3_Size() {
        return sizeof(XMFLOAT3);
    }
    EXPORT_C_API int __cdecl uint8_t_Size() {
        return sizeof(uint8_t);
    }
    EXPORT_C_API int __cdecl UVResultTemp_Size() {
        return sizeof(UVResultTemp);
    }
    EXPORT_C_API int __cdecl UVATLAS_options_Size() {
        return sizeof(UVATLAS);
    }
}
