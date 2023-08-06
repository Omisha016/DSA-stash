//
//  FindUnique.cpp
//  Array
//
//  Created by Omisha Gupta on 15/07/23.
//

#include <iostream>
using namespace std;

int main()
{
    int ans=0;
    int arr[7]={1,3,6,3,6,4,1};
    for(int i=0;i<7;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}
