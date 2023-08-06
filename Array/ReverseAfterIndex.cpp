//
//  ReverseAfterIndex.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Reverse(vector<int>v, int n, int a)
{
    for(int i=a,j=n-1;i<j;i++,j--)
    {
        swap(v[i],v[j]);
    }
    
    for(int t:v)
    {
        cout<<t<<" ";
    }
}

int main()
{
    vector <int>v;
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int a;
    cout<<"Enter the index :";
    cin>>a;
    cout<<endl;
    
    Reverse(v,n,a);
    return 0;
}

