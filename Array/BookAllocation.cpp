//
//  BookAllocation.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>

using namespace std;
bool isPossible(int arr[], int n, int mid, int no)
{
    int s=1;
    int pagesum =0;
    
    for(int i=0;i<n;i++)
    {
      if(pagesum + arr[i]<=mid)
      {
          pagesum+=arr[i];
      }
      else
      {
          s++;
          if(s>no || arr[i]>mid)
          {
              return false;
          }
          pagesum=arr[i];
      }
    }
    return true;
}
int binarysearch(int arr[],int n,int sum,int no)
{
    int s=0,e=sum;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<e)
    {
        if(isPossible(arr,n,mid,no))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main()
{
    int arr[4]={10,20,30,40};
    int n=2;
    
    int sum=0;
    
    for(int i=0;i<4;i++)
    {
        sum+=arr[i];
    }
    
    cout<<binarysearch(arr,4, sum,n)<<endl;
}
