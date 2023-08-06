//
//  PriorityQueue.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <queue>

using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>>mini;
    
    maxi.push(1);
    maxi.push(0);
    maxi.push(2);
    maxi.push(5);
    
    //int n=maxi.size();
    for(int i=0;i<4;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    
    mini.push(1);
    mini.push(0);
    mini.push(2);
    mini.push(5);
    
    //int m=mini.size();
    for(int i=0;i<4;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}
