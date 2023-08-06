//
//  isSorted.cpp
//  Recursion
//
//  Created by Omisha Gupta on 21/07/23.
//

#include <iostream>

using namespace std;

bool isSorted(int *arr,int n)
{
    if(n==0 || n==1)
        return true;
    if(*arr<*(arr+1))
        return isSorted(arr+1,n-1) ;
    else
        return false;
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
    if(isSorted(arr,n))
        cout<<"The array is sorted"<<endl;
    else
        cout<<"The array is not sorted"<<endl;
    
}
