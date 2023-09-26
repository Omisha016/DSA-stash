//
//  cycleDirectedGraph.cpp
//  graphs
//
//  Created by Omisha Gupta on 08/08/23.
//

#include <list>
#include <unordered_map>
using namespace std;

bool solve(int node,unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsvisited,unordered_map<int,list<int>> adj)
{
  visited[node]=true;
  dfsvisited[node]=true;

  for(auto i:adj[node])
  {
    if(!visited[i])
    {
      if(solve(i,visited,dfsvisited,adj))
       {
         return true;
       }
    }
    else if(dfsvisited[i])
    {
      return true;
    }
  }

  dfsvisited[node]=false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
   unordered_map<int,list<int>> adj;
   for(int i=0;i<edges.size();i++)
   {
     int u=edges[i].first;
     int v=edges[i].second;

     adj[u].push_back(v);
   }

  unordered_map<int,bool> visited;
  unordered_map<int,bool> dfsvisited;
   for(int i=0;i<=n;i++)
   {
     if(!visited[i])
     {
       if(solve(i,visited,dfsvisited,adj))
       {
         return true;
       }
     }
   }
   return false;
}
