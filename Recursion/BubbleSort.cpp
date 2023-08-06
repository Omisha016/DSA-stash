//
//  BubbleSort.cpp
//  Recursion
//
//  Created by Omisha Gupta on 21/07/23.
//

#include <iostream>
#include <algorithm>

using namespace std;

void Sort(int *arr, int n)
{
    if(n==0)
    {
        return;
    }
    if(n==1)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    return Sort(arr,n-1);
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
    Sort(arr,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
