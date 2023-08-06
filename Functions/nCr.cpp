//
//  nCr.cpp
//  Functions
//
//  Created by Omisha Gupta on 15/07/23.
//

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1) return 1;
    return n*factorial(n-1);
}
int nCr(int n, int r)
{
    int ans=(factorial(n)/(factorial(n-r)*factorial(r)));
    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;
    if(n>=r)
    {
        cout<<nCr(n,r)<<endl;
    }
    else
    {
        cout<<"Enter valid numbers"<<endl;
    }
    return 0;
}
