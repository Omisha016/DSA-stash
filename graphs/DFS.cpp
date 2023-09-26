//
//  DFS.cpp
//  graphs
//
//  Created by Omisha Gupta on 07/08/23.
//

#include <iostream>
#include <map>
#include <vector>
#include <list>

using namespace std;

void dfs(int i,unordered_map<int,bool> &visited,unordered_map<int,list<int>> adj, vector<int>&comp)
{
    comp.push_back(i);
    visited[i]=1;

    for(auto j:adj[i])
    {
        if(!visited[j])
        {
            dfs(j,visited,adj,comp);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int,list<int>> adj;
    for(int i=0;i<E;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int,bool>visited;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int> comp;
            dfs(i,visited,adj,comp);
            ans.push_back(comp);
        }
    }
    return ans;
}
