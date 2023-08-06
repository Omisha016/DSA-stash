//
//  main.cpp
//  Tries
//
//  Created by Omisha Gupta on 01/08/23.
//

#include <iostream>
using namespace std;

class TrieNode{
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    
    TrieNode(char c)
    {
        data=c;
        
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
        
    }
};

class trie{
public:
    TrieNode* root;
    
    trie()
    {
        root=new TrieNode('\0');
    }
    
    void insertutil(TrieNode* root, string word)
    {
     if(word.length()==0)
     {
         root->isTerminal=true;
         return;
     }
        
        int index=word[0]-'A';
        TrieNode* child;
        
        if(root->children[index] !=NULL)
        {
            child=root->children[index];
        }
        else
        {
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        
        insertutil(child, word.substr(1));
    }
    
    void insertword(string word)
    {
        insertutil(root, word);
    }
    
    bool searchutil(TrieNode* root, string word)
    {
        if(word.length()==0)
        {
            return root->isTerminal;
        }
        
        int index=word[0]-'A';
        TrieNode* child;
        
        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }
        else
        {
            return false;
        }
        
        return searchutil(child, word);
        
    }
    
    bool search(string word)
    {
        return searchutil(root, word);
    }
};
int main()
{
    
    trie*  t=new trie();
    
    t->insertword("ARM");
    t->insertword("DO");
    t->insertword("TIME");
    
    cout<<t->search("TIM")<<endl;
    
}
