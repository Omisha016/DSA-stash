//
//  ShortestPath.cpp
//  graphs
//
//  Created by Omisha Gupta on 09/08/23.
//

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <stack>
#include <queue>

using namespace std;

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
    
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;
    unordered_map<int, int> parent;

    queue<int> q;
    q.push(s);

    visited[s]=true;
    parent[s]=-1;

    while(!q.empty())
    {
        int x=q.front();
        q.pop();

        for(auto i:adj[x])
        {
            if(!visited[i])
            {
                q.push(i);
                parent[i]=x;
                visited[i]=true;
            }
        }
    }

    stack<int>st;
    st.push(t);

    while(st.top()!=s)
    {
        st.push(parent[t]);
        t=parent[t];
    }

    vector<int> ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}
