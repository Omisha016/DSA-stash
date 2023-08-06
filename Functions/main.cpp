//
//  main.cpp
//  Functions
//
//  Created by Omisha Gupta on 15/07/23.
//

#include <iostream>
using namespace std;

void multiply(int a, int b)
{
    int ans=1;
    ans=a*b;
    cout<<ans;
    
}
int main() {
    int a,b;
    cin>>a>>b;
    multiply(a,b);
    return 0;
}
