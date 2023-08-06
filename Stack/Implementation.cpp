//
//  Implementation.cpp
//  Stack
//
//  Created by Omisha Gupta on 26/07/23.
//

#include <iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    
    void pop()
    {
        if(top>=0)
        {
            top--;
            
        }
        else{
            cout<<"Underflow"<<endl;
        }
    }
    
    int peak()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    
    bool isEmpty()
    {
        if(top==-1)
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
    
    st.push(22);
    st.push(43);
    st.push(44);
    
    st.pop();
    cout<<st.peak()<<endl;
}
