//
//  Prim's Algo.cpp
//  graphs
//
//  Created by Omisha Gupta on 11/08/23.
//

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <stack>
#include <queue>

using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int,list<pair<int,int>>> adj;

    for(int i=0;i<m;i++)
    {
        int u=g[i].first.first;
        int v=g[i].first.second;
        int w=g[i].second;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> key(n+1,INT_MAX);
    vector<int> visited(n+1,false);
    vector<int> parent(n+1,-1);

    key[1]=0;
    pq.push({0,1});

    while(!pq.empty())
    {
        auto it=pq.top();
        int minNode=it.second;
        int dist=it.first;

        pq.pop();

        if(visited[minNode]==true)
        {
            continue;
        }

        visited[minNode]=true;

        for(auto i:adj[minNode])
        {
            int node=i.first;
            int wt=i.second;

            if(visited[node]==false && key[node]>wt)
            {
                key[node]=wt;
                pq.push({key[node],node});
                parent[node]=minNode;
            }
        }

    }

    vector<pair<pair<int, int>, int>> ans;
    for(int i=2;i<=n;i++)
    {
        ans.push_back({{parent[i], i}, key[i]});
    }
    return ans;
}
