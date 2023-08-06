//
//  reverseFirstK.cpp
//  Queue
//
//  Created by Omisha Gupta on 27/07/23.
//

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

queue<int> reverseElements(queue<int> &q, int k)
{
    stack<int>st;
    int n=(int)q.size();
    for(int i=0;i<k;i++)
    {
        st.push(q.front());
        q.pop();
    }

    for(int i=0;i<k;i++)
    {
        q.push(st.top());
        st.pop();
    }

    for(int i=0;i<n-k;i++)
    {
        q.push(q.front());
        q.pop();
    }

    return q;
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
    
    reverseElements(q, k);
    
    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

