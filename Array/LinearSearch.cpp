//
//  LinearSearch.cpp
//  Array
//
//  Created by Omisha Gupta on 15/07/23.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[10]={5, 7, 8, 9, 10, 5, 1, 6, 4, 0};
    int n;
    cout<<"Enter the number to be searched: ";
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(n==arr[i])
        {
            cout<<"index:"<<i<<endl;
        }
    }
    return 0;
}
