//
//  Sum2D.cpp
//  Array
//
//  Created by Omisha Gupta on 19/07/23.
//

#include <iostream>
using namespace std;

void Sum(int arr[][4], int row, int col)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main()
{
    int arr[3][4]={{0,1,2,3},{3,4,5,6},{6,7,8,9}};
    Sum(arr,3,4);
}
