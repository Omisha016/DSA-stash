//
//  Implementation.cpp
//  BinaryTrees
//
//  Created by Omisha Gupta on 27/07/23.
//

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class node{
  
    public:
        int data;
        node* left;
        node* right;
    
        node(int data)
        {
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

node* BuildTree(node* root)
{
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
    {
        return NULL;
    }
    
    cout<<"Enter the left node of"<<data<<endl;
    root->left=BuildTree(root->left);
    
    cout<<"Enter the right node of"<<data<<endl;
    root->right=BuildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
       
    }
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int heightleft=height(root->left);
    int heightright=height(root->right);
    int h=max(heightleft,heightright)+1;
    return h;
}

int diameter(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int dialeft=diameter(root->left);
    int diaright=diameter(root->right);
    int dia=height(root->left)+height(root->right)+1;
    int val=max(dialeft,max(diaright,dia));
    return val;
}

pair<int,int> diameterfast(node* root)
{
    if(root==NULL)
    {
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    
    pair<int,int> left=diameterfast(root->left);
    pair <int,int> right=diameterfast(root->right);
    int o1=left.first;
    int o2=right.first;
    int o3=left.second+right.second+1;
    pair<int,int> ans;
    ans.first=max(o1,max(o2,o3));
    ans.second=max(left.second,right.second);
    return ans;
    
}
int main()
{
    node* root=NULL;
    root=BuildTree(NULL);
    levelOrderTraversal(root);
    
    cout<<endl;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl<<endl<<height(root)<<endl;
    cout<<diameter(root)<<endl;
    cout<<diameterfast(root).first<<endl;
    return 0;
}
