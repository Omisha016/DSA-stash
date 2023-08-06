//
//  Power.cpp
//  Recursion
//
//  Created by Omisha Gupta on 21/07/23.
//

#include <iostream>

using namespace std;

int power(int n)
{
    //base case
    if(n==0)
        return 1;
    
    return 2*power(n-1);
        
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    cout<<"The valsue of power 2^"<<n<<" is "<<power(n)<<endl;
}

