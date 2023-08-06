//
//  ReverseAString.cpp
//  Recursion
//
//  Created by Omisha Gupta on 21/07/23.
//

#include <iostream>
#include <algorithm>
using namespace std;

string rev(string s, int i, int j)
{
    if(i>=j)
        return s;
    
    swap(s[i],s[j]);
    return rev(s,++i,--j);
}

int main()
{
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<"The reverse string is :"<<rev(s,0,(int)s.length()-1)<<endl;
}
