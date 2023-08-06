//
//  Interleave.cpp
//  Queue
//
//  Created by Omisha Gupta on 27/07/23.
//

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void interLeaveQueue(queue < int > & q) {
    stack<int>st;

    int n=(int)q.size();

    for(int i=0;i<n/2;i++)
    {
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    for(int i=0;i<n/2;i++)
    {
        q.push(q.front());
        q.pop();
    }
    
    for(int i=0;i<n/2;i++)
    {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    
}

int main()
{
    queue<int> q;
    cout<<"Enter the number of elements in the queue: "<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    
    cout<<"Enter k: "<<endl;
    int k;
    cin>>k;
    
    interLeaveQueue(q);
    
    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

//void interLeaveQueue(queue < int > & q) {
//    queue<int> q2;
//         int n=q.size()
//    for(int i=0;i<n)/2;i++)
//    {
//        q2.push(q.front());
//        q.pop();
//    }
//
//    while(!q2.empty())
//    {
//        q.push(q2.front());
//        q2.pop();
//        q.push(q.front());
//        q.pop();
//    }
//}
