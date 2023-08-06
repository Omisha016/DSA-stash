//
//  kqueue.cpp
//  Queue
//
//  Created by Omisha Gupta on 27/07/23.
//

#include <iostream>
#include <algorithm>

using namespace std;

class kqueue
{
    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int free;
    
    kqueue(int k)
    {
        n=10000;
        this->k=k;
        arr=new int[n];
        front=new int[k];
        rear= new int[k];
        next= new int[n];
        free=0;
        
        for(int i=0;i<k;i++)
        {
            front[i]=-1;
            rear[i]=-1;
        }
        
        for(int i=0;i<n;i++)
        {
            next[i]=i+1;
        }
        next[n-1]=-1;
    }
    
    void push(int data, int t)
    {
        if (free==-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        
        int index=free;
        
        free=next[index];
        
        if(front[t-1]==-1)
        {
            front[t-1]=index;
        }
        {
            next[rear[t-1]]=index;
        }
        next[index]=-1;
        arr[index]=data;
        rear[t-1]=index;
        
    }
    
    void pop(int t)
    {
        if(front[t-1]==-1)
        {
            cout<<"Empty"<<endl;
            return;
        }
        int index=front[t-1];
        front[t-1]=next[index];
        next[index]=free;
        free=index;
    }
    
    int Front(int t)
    {
        if(front[t-1]==-1)
        {
            return -1;
        }
        return arr[front[t-1]];
    }
    
    int Rear(int t)
    {
        if(front[t-1]==-1)
        {
            return -1;
        }
        return arr[rear[t-1]];
    }
};
int main()
{
    kqueue q(3);
    q.push(10,1);
    q.push(20, 2);
    q.push(30,1);
    q.push(40, 3);
    
    q.pop(2);
    
    q.pop(1);
    cout<<q.Front(1)<<endl;
    cout<<q.Rear(1)<<endl<<endl;
    cout<<q.Front(2)<<endl;
    cout<<q.Rear(2)<<endl<<endl;
    cout<<q.Front(3)<<endl;
    cout<<q.Rear(3)<<endl;
    return 0;
}
