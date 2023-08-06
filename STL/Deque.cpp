//
//  Deque.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(7);
    d.push_front(1);
    d.push_front(8);
    
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    d.pop_back();
    d.pop_front();
    
    cout<<"Is empty? "<<d.empty()<<endl;
    
    d.erase(d.begin(),d.begin()+1);
    
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
}
