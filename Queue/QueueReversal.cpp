//
//  QueueReversal.cpp
//  Queue
//
//  Created by Omisha Gupta on 27/07/23.
//

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseq(queue<int> &q)
{
//    stack<int> s;
//    while(!q.empty())
//    {
//        s.push(q.front());
//        q.pop();
//    }
//
//    while(!s.empty())
//    {
//        q.push(s.top());
//        s.pop();
//    }
    
    if(q.empty())
    {
        return;
    }
    
    int num=q.front();
    q.pop();
    reverseq(q);
    q.push(num);
    
}
int main()
{
    queue<int> q;
    cout<<"Enter the number of elements in the stack: "<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    reverseq(q);
    
    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
