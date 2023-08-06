//
//  Array.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,4>a={1,2,3,4};
    int size=a.size();
    
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    
    cout<<"Element at index 2:"<<a.at(2)<<endl;
    cout<<"Array empty or not: "<<a.empty()<<endl;
    
    cout<<"First and last element respectively:"<<a.front()<<" "<<a.back()<<endl;
}
