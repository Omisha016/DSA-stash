//
//  stack.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> s;
    
    s.push("Omisha");
    s.push("Gupta");
    s.push("is");
    s.push("the");
    s.push("best");
    
    s.pop();
    cout<<"Top element "<<s.top()<<endl;
    
    cout<<"Size :"<<s.size()<<endl;
    cout<<"Empty :"<<s.empty()<<endl;
    
}
