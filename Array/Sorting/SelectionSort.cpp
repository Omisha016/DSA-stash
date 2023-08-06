//
//  SelectionSort.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Selectionsort(vector<int>v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        int min=i;
        for(int j=i;j<v.size();j++)
        {
            if(v[j]<v[min])
            {
                min=j;
            }
        }
        swap(v[min],v[i]);
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
    
    Selectionsort(v);
    return 0;
}
