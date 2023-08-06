//
//  Wave.cpp
//  Array
//
//  Created by Omisha Gupta on 19/07/23.
//

#include <iostream>
using namespace std;

void Wave(int arr[][4], int row, int col)
{
    for(int i=0;i<col;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<row;j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            for(int j=row-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][4]={{0,1,2,3},{3,4,5,6},{6,7,8,9}};
    Wave(arr,3,4);
}
