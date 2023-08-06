//
//  CircularLinkedList.cpp
//  LinkedList
//
//  Created by Omisha Gupta on 24/07/23.
//

#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->next=this;
    }
    ~Node()
    {
        if(this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }
    }
};

void insertAtHead(Node* &tail,int d)
{
    if(tail==NULL)
    {
        Node* node1=new Node(d);
        node1->next=node1;
        tail=node1;
    }
    else
    {
        Node* temp= new Node(d);
        temp->next=tail->next;
        tail->next=temp;
    }
}

void insertAtTail(Node* &tail,int d)
{
    if(tail==NULL)
    {
        Node* node1=new Node(d);
        node1->next=node1;
        tail=node1;
    }
    else
    {
        Node* temp= new Node(d);
        temp->next=tail->next;
        tail->next=temp;
        tail=temp;
    }
}

void insertAtPosition(Node* &tail,int pos,int d)
{
    if(pos==1)
    {
        insertAtHead(tail, d);
        return;
    }
    
    Node* temp=tail->next;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    
    if(temp->next==tail->next)
    {
        insertAtTail(tail, d);
        return;
    }
    
    Node* prev=temp;
    Node* curr=temp->next;
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=curr;
    prev->next=nodeToInsert;
    
}

void print(Node* &tail)
{
    Node* temp=tail->next;
    
    while(temp!=tail)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<tail->data<<endl;
}

int main()
{
    Node* node1= new Node(5);
    Node* tail=node1;
    insertAtHead(tail, 10);
    insertAtHead(tail, 20);
    insertAtTail(tail, 30);
    insertAtPosition(tail,1, 4);
    print(tail);
    cout<<tail->next->data<<endl;
    return 0;
}


//has cycle
//if(head==NULL)
//            return false;
//        map<ListNode*,bool> m;
//        ListNode* temp=head->next;
//        m[head]=true;
//        m[temp]=false;
//        while(temp!=NULL && m[temp]==false)
//        {
//            m[temp]=true;
//            temp=temp->next;
//        }
//
//        if(temp==NULL)
//        {
//            return false;
//        }
//        return true;
