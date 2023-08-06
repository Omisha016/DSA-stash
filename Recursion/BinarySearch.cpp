//
//  BinarySearch.cpp
//  Recursion
//
//  Created by Omisha Gupta on 21/07/23.
//

#include <iostream>

using namespace std;
bool Bin(int *arr,int s, int e,int n)
{
    if(s>e)
    {
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==n)
        return true;
    else if(n<arr[mid])
        return Bin(arr,s,mid-1,n);
    else
        return Bin(arr,mid+1,e,n);
}

int main()
{
    int arr[5]={1,2,4,6,8};
    int n;
    cout<<"Enter the key: ";
    cin>>n;
    
    if(Bin(arr,0,5,n))
        cout<<"Present"<<endl;
    else
        cout<<"Absent"<<endl;
}
