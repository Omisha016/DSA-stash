//
//  Implementation.cpp
//  Queue
//
//  Created by Omisha Gupta on 27/07/23.
//

#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;
public:
    Queue()
    {
        size=100001;
        arr=new int[size];
        front=0;
        rear=0;
    }
    
    bool isEmpty()
    {
        if(rear==front)
            return true;
        else
            return false;
            
    }
    
    void enqueue(int data)
    {
        if(rear==size)
        {
            cout<<"Queue is full";
        }
        else
        {
            arr[rear]=data;
            rear++;
        }
    }
    void dequeue()
    {
        if(front==rear)
        {
            cout<<"Queue is empty";
        }
        else
        {
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }
    
    int frontq()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    
};

int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    
    cout<<q1.frontq()<<endl;
    q1.dequeue();
    cout<<q1.frontq()<<endl;
}
