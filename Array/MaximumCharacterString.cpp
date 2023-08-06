//
//  MaximumCharacterString.cpp
//  Array
//
//  Created by Omisha Gupta on 19/07/23.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char MaxOcc(string s,int l)
{
    int arr[26]={0};
    for(int i=0;i<l;i++)
    {
        arr[s[i]-'a']++;
    }
    int result=arr[0];
    int c=0;
    for(int i=0;i<26;i++)
    {
        result=max(result,arr[i]);
        if(result==arr[i])
        {
            c=i;
        }
        
    }
    return char(c +'a') ;
}

int main()
{
    string s;
    cout<<"enter string:"<<endl;
    cin>>s;
    
    int l=(int)s.length();
    
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<"Maximum occurning character is:"<<MaxOcc(s,l)<<endl;;
}
