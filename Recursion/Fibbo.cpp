//
//  Fibbo.cpp
//  Recursion
//
//  Created by Omisha Gupta on 21/07/23.
//

#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fibo(n-2)+fibo(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    
    cout<<"Term nth of fibonaaci series is: "<<fibo(n)<<endl;
}
