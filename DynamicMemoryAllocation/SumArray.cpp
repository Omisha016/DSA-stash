//
//  SumArray.cpp
//  DynamicMemoryAllocation
//
//  Created by Omisha Gupta on 20/07/23.
//

#include <iostream>
using namespace std;
int Sum(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    
    int *arr=new int[n];
    
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sun of the array: "<<Sum(arr,n);
}
