//
//  BinarySearch.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

// monotonic functions applicable only

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size,int key)
{
    int start=0,end=size-1;
    int mid=(start+end)/2;
    while (start <=end) {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
            
        }
        if(key<arr[mid])
        {
            end=mid-1;
        }
        //cout<<start<<" "<<end<<endl;
        mid=(start+end)/2;
        //cout<<mid<<endl;
    }
    return -1;
}
int main()
{
    int even[6]={0,3,6,7,8,10};
    int odd[5]={0,3,6,7,8};
    
    int n=0;
    cout<<"Enter the key: ";
    cin>>n;
    
    cout<<"Index even :"<<BinarySearch(even, 6, n)<<endl;
    cout<<"Index odd :"<<BinarySearch(odd, 5, n)<<endl;
    return 0;
}
