//
//  Pair Sum.cpp
//  Array
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[5]={1,4,2,6,3};
    int n=0;
    vector<int> ans;
    cout<<"Enter the sum to be found: "<<endl;
    cin>>n;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
         if(arr[i]+arr[j]==n)
         {
             ans.push_back(min(arr[i],arr[j]));
             ans.push_back(max(arr[i],arr[j]));
             for(int i:ans)
             {
                 cout<<i<<" ";
             }cout<<endl;
             ans.erase(ans.begin(), ans.end());
         }
        }
    }
    
}
