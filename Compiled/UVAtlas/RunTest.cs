using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.InteropServices;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class RunTest : MonoBehaviour
{

    public MeshFilter[] meshFilters;
    public Stopwatch timer = new Stopwatch();

    void Start()
    {
        Application.targetFrameRate = 24;

        foreach (var mf in meshFilters)
        {
            Mesh newmesh = Instantiate(mf.sharedMesh);

            bool newUVAtlas = false;

            //newUVAtlas = NasaUVAtlas.Old_UVAtlas(newmesh);
            newUVAtlas = GenarateUVMesh(newmesh, out Mesh genmesh);

            if (newUVAtlas)
                mf.sharedMesh = genmesh;
        }
    }

    public bool GenarateUVMesh(Mesh mesh, out Mesh newMesh)
    {

        timer.Restart();

        var positions = mesh.vertices;
        uint[] tris = (uint[])(object)mesh.triangles;

        newMesh = null;
        if (!VorticeUVAtlasWrap_Win64.ComputeAdj(tris, positions, out uint[] adj))
        {
            Debug.LogError(mesh.name + "ComputeAdj ERROR");
            return false;
        }

        //string uvresultstr = null;
        //foreach (var i in adj)
        //    uvresultstr = uvresultstr + "," + i;
        //Debug.Log("newAdj:" + uvresultstr);

        if (!VorticeUVAtlasWrap_Win64.ComputeUV(positions, tris, adj, out UVResultManaged uvresult)) {
            Debug.LogError(mesh.name + "ComputeUV ERROR");
            return false;
        }

        timer.Stop();
        Debug.Log(mesh.name+" UVAtlas Done,spend:"+ timer.ElapsedMilliseconds+"ms");

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



