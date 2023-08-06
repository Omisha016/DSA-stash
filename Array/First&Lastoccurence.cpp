//
//  First&Lastoccurence.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>
using namespace std;

int FirstOccu(int arr[], int size,int key)
{
    int start=0,end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start <=end) {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
            
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        //cout<<start<<" "<<end<<endl;
        mid=(start+end)/2;
        //cout<<mid<<endl;
    }
    return ans;
}

int LastOccu(int arr[], int size,int key)
{
    int start=0,end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start <=end) {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
            
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        //cout<<start<<" "<<end<<endl;
        mid=(start+end)/2;
        //cout<<mid<<endl;
    }
    return ans;
}

int main()
{
    int arr[11]={1,2,3,3,3,3,3,3,3,4,5};
    
    int n=0;
    cout<<"Enter the key: ";
    cin>>n;
    
    cout<<"First Occurence :"<<FirstOccu(arr, 11, n)<<endl;
    cout<<"Last Occurence :"<<LastOccu(arr, 11, n)<<endl;
    return 0;
}
