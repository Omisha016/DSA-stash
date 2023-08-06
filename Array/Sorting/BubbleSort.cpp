//
//  BubbleSort.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Bubblesort(vector<int>v)
{
    for(int j=1;j<v.size();j++)
    {
        for(int i=0;i<v.size()-j;i++)
        {
            if(v[i+1]<v[i])
            {
                swap(v[i+1],v[i]);
            }
        }
    }
    
    for(int i:v)
    {
        cout<<i<<" ";
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
    cout<<endl;
    
    Bubblesort(v);
    return 0;
}
