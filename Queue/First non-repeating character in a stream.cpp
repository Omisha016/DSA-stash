//
//  First non-repeating character in a stream.cpp
//  Queue
//
//  Created by Omisha Gupta on 27/07/23.
//

//{ Driver Code Starts
#include<iostream>
#include <map>
#include <queue>

using namespace std;

string FirstNonRepeating(string A){
 unordered_map<char,int> count;
 queue <char> q;
 string ans ="";
 
 for(int i=0;i<A.length();i++)
 {
     count[A[i]]++;
     
     q.push(A[i]);
     
     while(!q.empty())
     {
         if(count[q.front()]>1)
         {
             q.pop();
         }
         else
         {
             ans.push_back(q.front());
             break;
         }
     }
     
     if(q.empty())
        ans.push_back('#');
     
 }
 
 return ans;
    
}
//{ Driver Code Starts.
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        string A;
        cin >> A;
        string ans=FirstNonRepeating(A);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
