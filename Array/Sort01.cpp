//
//  Sort01.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5]={1,1,0,1,0};
    int i=0,j=4;
    
    while(i<=j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        if(arr[j]==1)
        {
            j--;
        }
        if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

