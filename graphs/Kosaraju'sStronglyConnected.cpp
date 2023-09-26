//
//  Kosaraju'sStronglyConnected.cpp
//  graphs
//
//  Created by Omisha Gupta on 12/08/23.
//

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <stack>
#include <queue>

using namespace std;

void dfs(int node,vector<int> adj[],stack<int> &st, vector<bool> &visited)
{
    visited[node]=true;
    for(auto it:adj[node])
    {
        if(visited[it]==false)
        {
            dfs(it,adj,st,visited);
        }
    }
    st.push(node);
}

void revdfs(int node,vector<bool> &visited, vector<int> tadj[])
{
    visited[node]=true;

    for(auto i:tadj[node])
    {
        if(!visited[i])
        {
            revdfs(i,visited,tadj);
        }
    }

}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
    vector<int> adj[v];
    for(auto it:edges)
    {
        adj[it[0]].push_back(it[1]);
    }

    stack<int> st;
    vector<bool> visited(v,false);
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            dfs(i,adj,st,visited);
        }
    }

    vector<int> tadj[v];

    for(int i=0;i<v;i++)
    {
        visited[i]=false;
        for(auto it:adj[i])
        {
            tadj[it].push_back(i);
        }
    }

    int count =0;

    while(!st.empty())
    {
        int top=st.top();
        st.pop();
        if(!visited[top])
        {
            count++;
            revdfs(top,visited,tadj);
        }
    }

    return count;
}
