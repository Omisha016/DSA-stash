//
//  BinaryToDecimal.cpp
//  LearnCpp
//
//  Created by Omisha Gupta on 15/07/23.
//

#include <iostream>

using namespace std;
int main() {
    long long int n=0;
    cout<<"Enter the binary number to be converted:"<<endl;
    cin>>n;
    unsigned long long int result=0,i=0;
    
    while(n)
        {
            int digit=n%10;
            result+=digit*pow(2,i);
            n=n/10;
            i++;
        }
    cout<<result;
    return 0;

}
