//
//  ReverseStack.cpp
//  Stack
//
//  Created by Omisha Gupta on 26/07/23.
//

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int num )
{
    if(st.empty())
    {
        st.push(num);
        return;
    }
    
    int n=st.top();
    st.pop();
    
    insertAtBottom(st, num);
    
    st.push(n);
       
}

void reversest(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    
    int num=st.top();
    st.pop();
    
    reversest(st);
    insertAtBottom(st,num);
}
int main()
{
    stack<int>st;
    cout<<"Enter the number of elements in the stack: "<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    reversest(st);
    
    cout<<st.top()<<endl;
}
