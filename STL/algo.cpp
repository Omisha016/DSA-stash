//
//  algo.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    
    cout<<"Binary Search "<<binary_search(v.begin(),v.end(),6)<<endl;
    
    cout<<"Lower Bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper Bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    int a=3,b=5;
    cout<<"Max "<<max(a,b)<<endl;
    cout<<"Min "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"value "<<a<<" "<<b<<endl;
    
    string str="abcd";
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    
    rotate(v.begin(), v.begin()+1, v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    
}
