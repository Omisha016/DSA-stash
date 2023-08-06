//
//  Queue.cpp
//  STL
//
//  Created by Omisha Gupta on 16/07/23.
//

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    
    q.push("First");
    q.push("Second");
    q.push("Third");
    
    cout<<"Size :"<<q.size()<<endl;
    
    q.pop();
    cout<<"first :"<<q.front()<<endl;
    
}
