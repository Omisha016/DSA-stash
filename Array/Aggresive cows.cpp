//
//  Aggresive cows.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>
#include <algorithm>

using namespace std;

int isposs(vector<int> arr, int n, int mid, int no)
{
    int count=1;
    int lastposition=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]-lastposition>=mid)
        {
            count++;
            if(count==no)
            {
                return true;
            }
            lastposition=arr[i];
        }
    }
    return false;
}
int AggressiveCows(vector<int>arr, int n, int no)
{
    int maxi=-1;
    
    for(int i=0;i<n;i++)
    {
        maxi=arr[i]>=maxi?arr[i]:maxi;
    }
    int e=maxi,s=0,ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isposs(arr,n, mid, no))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int>arr={1,4,6,5,8};
    int no=2;
    
    sort(arr.begin(),arr.end());
    cout<<AggressiveCows(arr,5,no)<<endl;
    return 0;
}
