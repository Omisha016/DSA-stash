//
//  SortStack.cpp
//  Stack
//
//  Created by Omisha Gupta on 26/07/23.
//


#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &st, int num)
{
    if(st.empty())
    {
        st.push(num);
        return;
    }
    
    if(num<st.top())
    {
        int n=st.top();
        st.pop();
        insert(st,num);
        st.push(n);
    }
    else
    {
        st.push(num);
    }
}

void sort(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    
    int num=st.top();
    st.pop();
    sort(st);
    
    insert(st,num);
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
    sort(st);
    
    for(int i=0;i<n;i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
