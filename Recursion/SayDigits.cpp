//
//  SayDigits.cpp
//  Recursion
//
//  Created by Omisha Gupta on 21/07/23.
//

#include <iostream>
using namespace std;

void Say(string arr[10],int n)
{
    if(n<=0)
    {
        return;
    }
    
    int digit=n%10;
    Say(arr,n/10);
    cout<<arr[digit]<<" ";
}

int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    Say(arr,n);
    
    return 0;
}
