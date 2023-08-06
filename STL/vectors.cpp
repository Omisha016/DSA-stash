//
//  vectors.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>v;
    //Copy same element
    vector<int>a(5,1);
    cout<<"Contents of a"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    //Copy a vector
    vector<int>b(a);
    cout<<"Contents of b"<<endl;
    for(int i:b)
    {
        cout<<i<<" ";
    }
    
    cout<<"Capacity :"<<v.capacity()<<endl;
    //adding elements
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
    //access
    cout<<"Element at index 2 :"<<v.at(2)<<endl;
    
    //first nd last element
    cout<<"front :"<<v.front()<<endl;
    cout<<"back :"<<v.back()<<endl;
    
    //pop
    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    
    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    //clear affects size
    v.clear();
    cout<<"Size of the vector :"<<v.size()<<endl;
}
