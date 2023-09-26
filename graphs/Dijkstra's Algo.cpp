//
//  Dijkstra's Algo.cpp
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
#include <set>

using namespace std;

//priority queue

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(vertices,INT_MAX);

    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++)
    {
        int u=vec[i][0];
        int v=vec[i][1];
        adj[u].push_back(make_pair(vec[i][1],vec[i][2]));
        adj[v].push_back(make_pair(vec[i][0],vec[i][2]));
    }

    dist[source]=0;
    pq.push({0,source});

    while(!pq.empty())
    {
        int node=pq.top().second;
        int distance=pq.top().first;
        pq.pop();
        for(auto &i:adj[node])
        {
            int next=i.first;
            int weight=i.second;

            if(distance+weight<dist[next])
            {
                dist[next]=distance+weight;
                pq.push({dist[next],next});
            }
        }
    }
    return dist;
}


//set
vector<int> dijkstra2(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++)
    {
        int u=vec[i][0];
        int v=vec[i][1];
        adj[u].push_back(make_pair(vec[i][1],vec[i][2]));
        adj[v].push_back(make_pair(vec[i][0],vec[i][2]));
    }

    set<pair<int,int>> s;
    vector<int> dist(vertices,INT_MAX);
    dist[source]=0;
    pair<int,int> p=make_pair(0,source);
    s.insert(p);
    while(!s.empty())
    {
        auto top=*(s.begin());
        s.erase(s.begin());
        int nodedist=top.first;
        int node=top.second;
        for(auto i:adj[node])
        {
            if(dist[i.first]>nodedist+i.second)
            {
                if(dist[i.first]!=INT_MAX)
                {
                    s.erase({dist[i.first],i.first});
                }
                dist[i.first]=nodedist+i.second;
                s.insert({dist[i.first], i.first});
            }
        }
    }
    return dist;
}
