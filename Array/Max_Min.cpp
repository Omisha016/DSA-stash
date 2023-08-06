//
//  Max_Min.cpp
//  Array
//
//  Created by Omisha Gupta on 15/07/23.
//

#include <iostream>
using namespace std;

int max(int array[5],int size)
{
    int result=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(result<array[i])
        {
            result=array[i];
        }
    }
    return result;
}

int min(int array[5], int size)
{
    int result=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(result>array[i])
        {
            result=array[i];
        }
    }
    return result;
    
}
int main()
{
    int a[5];
    
    cout<<"Enter the numbers: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    int max_result= max(a,5);
    int min_result= min(a,5);
    cout<<"Max value: "<<max_result<<endl<<"Min value: "<<min_result<<endl;
    return 0;
}


//can also use predefined function max(a,b); min(a,b) to find values;
