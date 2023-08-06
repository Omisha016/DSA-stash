//
//  QuickSort.cpp
//  Recursion
//
//  Created by Omisha Gupta on 22/07/23.
//

#include <iostream>
#include <algorithm>

using namespace std;

int Partition(int *arr,int s,int e)
{
    int p=arr[s];
    int count=0;
    
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=p)
            count++;
    }
    
    int pindex=s+count;
    swap(arr[pindex],arr[s]);
    
    int j=0,k=e;
    while(j<pindex && k>pindex)
    {
        while(arr[j]<p)
                j++;
        while(arr[k]>p)
                k++;
        if(arr[j]>p && arr[k]<p)
        {    swap(arr[j],arr[k]);
            j++;k++;
        }
    }
    return pindex;
}

void Sort(int *arr,int s, int e)
{
    if(s>=e)
        return;
    
    int p= Partition(arr,s,e);
    
    Sort(arr,s,p-1);
    Sort(arr,p+1,e);
    
}

int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int *arr=new int[n];
    
    cout<<"Enter the arr elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    
    cout<<"The sorted array is :";
    Sort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
