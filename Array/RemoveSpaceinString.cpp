//
//  RemoveSpaceinString.cpp
//  Array
//
//  Created by Omisha Gupta on 19/07/23.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Rmv(string s, int l)
{
    string temp="";
    for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main()
{
    string s;
    cout<<"enter string:"<<endl;
    getline(cin,s);
    int l=(int)s.length();
    
    cout<<"Maximum occurning character is:"<<Rmv(s,l)<<endl;;
}
