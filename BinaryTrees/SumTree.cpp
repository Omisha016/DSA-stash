//
//  SumTree.cpp
//  BinaryTrees
//
//  Created by Omisha Gupta on 28/07/23.
//

//{ Driver Code Starts
#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;
    
    basic_istringstream<char> iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    pair<bool,int> isSumTreeFast(Node* root)
    {
        if(root==NULL)
        {
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> left=isSumTreeFast(root->left);
        pair<bool,int> right=isSumTreeFast(root->right);
        bool left1=left.first;
        bool right1=right.first;
        int sum=left.second+right.second;
        pair<bool,int> ans=make_pair(false,sum);
        if(left1 && right1 && sum==root->data )
        {
            ans.first=true;
        }
        ans.second=sum+root->data;
        return ans;
    }
    bool isSumTree(Node* root)
    {
         if(root==NULL)
            return true;
        return isSumTreeFast(root).first;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        Solution ob;
        cout <<ob.isSumTree(root) << endl;
    }
    return 1;
}
// } Driver Code Ends
