//
//  cycleUndirectedGraph.cpp
//  graphs
//
//  Created by Omisha Gupta on 07/08/23.
//



#include <iostream>
#include <unordered_map>
#include <queue>
#include <list>

using namespace std;

//bfs
bool solvebfs(int src,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj )
{
    unordered_map<int,int> parent;

    parent[src]=-1;
    visited[src]=1;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int x=q.front();
        q.pop();

        for(auto i:adj[x])
        {
            if(visited[i]==true && i!=parent[x])
            {
                return true;
            }
            else if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
                parent[i]=x;
            }
        }
    }
    return false;
}

//dfs
bool solvedfs(int src,int parent,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj )
{
    visited[src]=true;
    for(auto i:adj[src])
    {
        if(!visited[i])
        {
            if(solvedfs(i,src,visited,adj))
            {
                return true;
            }
        }
        else
        {
            if(i!=parent)
                return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int,list<int>> adj;
    for(int i=0;i<m;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            //bool ans=solvebfs(i,visited,adj);
            bool ans=solvedfs(i,-1,visited,adj);
            if(ans==1)
                return "Yes";
        }
    }
    return "No";
}
