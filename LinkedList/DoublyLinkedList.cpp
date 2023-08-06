//
//  DoublyLinkedList.cpp
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
    Node* prev;
    Node* next;
    
    Node(int d)
    {
        this->prev=NULL;
        this->data=d;
        this->next=NULL;
    }
    ~Node()
    {
        if(this->next!=NULL)
        {
            this->next=NULL;
            this->prev=NULL;
            delete next;
            delete prev;
        }
    }
    
};

void insertAtHead(Node* &head,Node* &tail,int d)
{
    if(head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d)
{
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
        Node* temp=new Node(d);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail,int pos,int d)
{
    if(pos==1)
    {
        insertAtHead(head,tail, d);
        return;
    }
    
    Node* temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    
    if(temp->next==NULL)
    {
        insertAtTail(head,tail, d);
        return;
    }
    
    Node* nodeToInsert=new Node(d);
    nodeToInsert->prev=temp;
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    
}

void deleteNode(Node* &head, Node* &tail,int pos)
{
    
    if(pos==1)
    {
        Node* temp=head;
        head=temp->next;
        head->prev=NULL;
        delete temp;
    }
    else{
        Node* temp=head;
        int count=1;
        while(count<pos)
        {
            temp=temp->next;
            count++;
        }
        
        if(temp->next==NULL)
        {
            tail=temp->prev;
            tail->next=NULL;
            delete temp;
        }
        else
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete temp;
        }
    }
    
    
}

void print(Node* &head)
{
    Node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(Node* &head)
{
    Node* temp =head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int main()
{
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail= node1;
    
    
    insertAtHead(head,tail,20);
    
    insertAtTail(head,tail,5);
    
    insertAtPosition(head, tail, 2, 15);
    
    print(head);
    cout<<"Length of linked list is: "<<getlength(head)<<endl;
    
    deleteNode(head, tail, 1);
    
    print(head);
    cout<<"Length of linked list is: "<<getlength(head)<<endl;
    return 0;
}
