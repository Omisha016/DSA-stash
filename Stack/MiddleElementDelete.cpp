//
//  MiddleElementDelete.cpp
//  Stack
//
//  Created by Omisha Gupta on 26/07/23.
//

#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int> &st,int n, int &count)
{
    if(count==n/2)
    {
        st.pop();
        return;
    }
    
    int num=st.top();
    st.pop();
    count++;
    deleteMiddle(st,n,count);
    
    st.push(num);
    
}
int main()
{
    stack<int>st;
    cout<<"Enter the number of elements in the stack: "<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<=n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    int count=0;
    deleteMiddle(st,n,count);
}
