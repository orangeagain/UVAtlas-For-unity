using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class RunTest : MonoBehaviour
{

    public MeshFilter[] meshFilters;

    void Start()
    {
        Application.targetFrameRate = 24;

        foreach (var mf in meshFilters)
        {
            Debug.Log("ComputeMeshUV: "+mf.name);
            Mesh newmesh = Instantiate(mf.sharedMesh);

            bool newUVAtlas = false;

            //newUVAtlas = NasaUVAtlas.Old_UVAtlas(newmesh);

            newUVAtlas = GenarateUVMesh(newmesh, out Mesh genmesh);
            if (newUVAtlas)
                mf.sharedMesh = genmesh;
        }
    }

    public static bool GenarateUVMesh(Mesh mesh, out Mesh newMesh)
    {

        var positions = mesh.vertices;
        uint[] tris = (uint[])(object)mesh.triangles;

        newMesh = null;
        if (!VorticeUVAtlasWrap_Win64.ComputeAdj(tris, positions, out uint[] adj))
        {
            Debug.LogError(mesh.name + "ComputeAdj´íÎó");
            return false;
        }

        //string uvresultstr = null;
        //foreach (var i in adj)
        //    uvresultstr = uvresultstr + "," + i;
        //Debug.Log("newAdj:" + uvresultstr);

        if (!VorticeUVAtlasWrap_Win64.ComputeUV(positions, tris, adj, out UVResultManaged uvresult)) {
            Debug.LogError(mesh.name + "ComputeUV´íÎó");
            return false;
        }

        newMesh = new Mesh();
        var vCount = uvresult.outPosUv.Length;
        Vector3[] newpos = new Vector3[vCount];
        Vector2[] newuv = new Vector2[vCount];
        for (int i = 0; i < vCount; i++)
        {
            newpos[i] = uvresult.outPosUv[i].Pos;
            newuv[i] = uvresult.outPosUv[i].UV;
        }
        newMesh.vertices = newpos;
        newMesh.uv = newuv;
        newMesh.triangles = (int[])(object)uvresult.outTris;
        return true;

    }
}



