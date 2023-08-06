//
//  InsertionSort.cpp
//  Sorting
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Insertionsort(vector<int>&v)
{
    for(int i=1;i<v.size();i++)
    {
        int temp=v[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(v[j]>temp)
            {
                v[j+1]=v[j];
            }
            else
                break;
        }
        v[j+1]=temp;
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
    
    Insertionsort(v);
    return 0;
}

