//
//  MergeSort.cpp
//  Sorting
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Mergesort(vector<int>a, vector<int>b)
{
    vector<int> v;
    int i=0,j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else if(b[j]<=a[i])
        {
            v.push_back(b[j]);
            j++;
        }
    }
    while(j<b.size())
    {
        v.push_back(b[j]);
        j++;
    }
    while(i<a.size())
    {
        v.push_back(a[i]);
        i++;
    }

    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    
}
int main()
{
    vector <int>v1;
    int n1;
    cout<<"Enter the number of elements"<<endl;
    cin>>n1;
    
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<endl;
    
    vector <int>v2;
    int n2;
    cout<<"Enter the number of elements"<<endl;
    cin>>n2;
    
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    cout<<endl;
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    Mergesort(v1,v2);
    return 0;
}
