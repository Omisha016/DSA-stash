//
//  ShortestDistanceInDAG.cpp
//  graphs
//
//  Created by Omisha Gupta on 11/08/23.
//

//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <stack>

using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void dfs(int node,unordered_map<int,list<pair<int,int>>> &adj, vector<bool> &visited,stack<int> &st)
    {
        visited[node]=true;
        for(auto &i:adj[node])
        {
            if(visited[i.first]==false)
            {
                dfs(i.first,adj,visited,st);
            }
        }
        st.push(node);
    }
    
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
       unordered_map<int,list<pair<int,int>>> adj;
       for(int i=0;i<M;i++)
       {
           int u=edges[i][0];
           pair<int,int> temp=make_pair(edges[i][1],edges[i][2]);
           adj[u].push_back(temp);
       }
       
       vector<bool> visited(N,false);
       stack<int> st;
       for(int i=0;i<N;i++)
       {
           if(visited[i]==false)
           {
               dfs(i,adj,visited,st);
           }
       }
       
         vector<int> distance(N,-1);
         
       distance[0]=0;
       int src;
       while(!st.empty())
       {
           src=st.top();
           st.pop();
           
           if(distance[src]!=-1)
           {
              for(auto &i:adj[src])
                {
                    int temp=i.first;
                    if(distance[temp]==-1)
                    {
                        distance[temp]=INT_MAX;
                    }
                    
                    if(distance[src]+i.second<distance[temp])
                    {
                        distance[temp]=distance[src]+i.second;
                    }
                }
           }
           
       }
       
       return distance;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
