//
//  TwoStack.cpp
//  Stack
//
//  Created by Omisha Gupta on 26/07/23.
//

#include <iostream>

using namespace std;

class Stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    void push1(int element)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    
    void push2(int element)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    
    void pop1()
    {
        if(top1>=0)
        {
            top1--;
            
        }
        else{
            cout<<"Underflow"<<endl;
        }
    }
    
    void pop2()
    {
        if(top2<size)
        {
            top2++;
            
        }
        else{
            cout<<"Underflow"<<endl;
        }
    }
    
    int peak1()
    {
        if(top1>=0)
        {
            return arr[top1];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    
    int peak2()
    {
        if(top2<size)
        {
            return arr[top2];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    
    bool isEmpty1()
    {
        if(top1==-1)
        {
            return true;
        }
        else
            return false;
    }
    
    bool isEmpty2()
    {
        if(top2==size)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    Stack st(5);
    
    st.push1(22);
    st.push1(43);
    st.push2(44);
    
    st.pop1();
    cout<<st.peak1()<<endl;
    cout<<st.peak2()<<endl;
}
