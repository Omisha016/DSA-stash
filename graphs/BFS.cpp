//
//  BFS.cpp
//  graphs
//
//  Created by Omisha Gupta on 07/08/23.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> visited (n,0);
    vector<int> ans;
    queue <int> q;
    q.push(0);
    visited[0]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(auto i:adj[x])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
            }
        }
    }

    return ans;
}
