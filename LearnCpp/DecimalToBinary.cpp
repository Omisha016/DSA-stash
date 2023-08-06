//
//  DecimalToBinary.cpp
//  LearnCpp
//
//  Created by Omisha Gupta on 15/07/23.
//

#include <iostream>

using namespace std;
int main() {
    long long int n=0;
    cout<<"Enter the number to be converted:"<<endl;
    cin>>n;
    unsigned long long int result=0,i=0;
    if(n<0)
    {
        n=pow(2,16)+n;
    }
    while(n)
        {
            int bit=n&1;
            result+=bit*pow(10,i);
            n=n>>1;
            i++;
        }
    cout<<result;
    return 0;

}
