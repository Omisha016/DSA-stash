//
//  Array with functions.cpp
//  Array
//
//  Created by Omisha Gupta on 15/07/23.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void printarray(int num[5],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<endl;
    }
}
int main()
{
    int number[5];
    for(int i=0;i<5;i++)
    {
        cin>>number[i];
    }
    printarray(number,5);
    return 0;
}
