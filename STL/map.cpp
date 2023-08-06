//
//  map.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string> m;
    
    m[1]="Omisha";
    m[5]="Gupta";
    m[15]="Hi";
    
    m.insert({3,"lol"});
    
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<endl;
    
    cout<<"Finding -13: "<<m.count(-13)<<endl;
    
    m.erase(3);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<endl;
    
    auto it=m.find(5);
    
    for(auto i=it; i!=m.end();i++)
    {
        cout<<(*i).second<<endl;
    }

        }
