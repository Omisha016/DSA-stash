//
//  RatInMaze.cpp
//  Recursion
//
//  Created by Omisha Gupta on 06/08/23.
//

#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int x, int y,vector < vector < int >> & arr,vector<vector<bool>> &visited,int n)
{
    if((x>=0 && x<n) && (y>=0 && y<n) && arr[x][y]==1 && visited[x][y]==0)
    {
        return true;
    }
    return false;
}
void solve(int x,int y,vector < vector < int >> & arr, int n,vector<string> &ans,vector<vector<bool>> &visited,string path)
{
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y]=1;

    if(isSafe(x+1,y,arr,visited,n))
    {
        solve(x+1,y,arr,n,ans,visited,path+'D');
    }
    
    if(isSafe(x,y-1,arr,visited,n))
    {
        solve(x,y-1,arr,n,ans,visited,path+'L');
    }

    if(isSafe(x,y+1,arr,visited,n))
    {
        solve(x,y+1,arr,n,ans,visited,path+'R');
    }

    if(isSafe(x-1,y,arr,visited,n))
    {
        solve(x-1,y,arr,n,ans,visited,path+'U');
    }
    visited[x][y]=0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector <string> ans;
    vector<vector<bool>> visited(n,vector<bool> (n,0));
    string path="";
    if(arr[0][0]==0)
        return ans;

    solve(0,0,arr,n,ans,visited,path);
    
    return ans;
}

int main()
{
    vector<vector<int>> maze;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>maze[i][j];
        }
    }
    
    vector<string> ans;
    
    ans=searchMaze(maze,n);
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
