//
//  SinglyLinkedList.cpp
//  LinkedList
//
//  Created by Omisha Gupta on 24/07/23.
//

#include <iostream>
using namespace std;

class Node
{
    public:
    //data
    int data;
    //address of next in the node
    Node* next;
    
    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }
    }
    
};

void InsertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d)
{
    if(position==1)
    {   InsertAtHead(head, d);
        return;
    }
    Node* temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    
    if(temp->next==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }
    
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}

void deleteNode(int pos,Node* &head,Node* &tail)
{
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        //temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        
        int count=1;
        while(count<pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        
        if(curr->next==NULL)
        {
            tail=prev;
        }
        prev->next=curr->next;
        //curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main()
{
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    
    //jab pehli node create hui toh dono head and tail ko ek saath first node pe point karvao
    Node* head=node1;
    Node* tail=node1;
    
    //Insert at head hai
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    InsertAtHead(head, 11);
    
    //Insert at tail hai
    InsertAtTail(tail, 9);
    
    //Insert in middle
    InsertAtPosition(head,tail,6, 13);
    
    //delete
    deleteNode(3, head,tail);
    deleteNode(5, head,tail);
    
    print(head);
    cout<<endl<<tail->data<<endl;
    
    return 0;
}
