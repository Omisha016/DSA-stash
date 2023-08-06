//
//  Set.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(8);
    s.insert(5);
    s.insert(7);
    
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    
    set<int> ::iterator it=s.begin();
    it++;
    
    s.erase(it);
    
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    
    cout<<"-5 is present: "<<s.count(-5)<<endl;
    
    set<int> ::iterator itr=s.find(5);
    
    
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    
}
