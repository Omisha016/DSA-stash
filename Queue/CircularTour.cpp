//
//  CircularTour.cpp
//  Queue
//
//  Created by Omisha Gupta on 27/07/23.
//

//{ Driver Code Starts
#include<iostream>

using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

class Solution{
  public:
  
    int tour(petrolPump p[],int n)
    {
       int deficit=0;
       int balance=0;
       int start=0;
       
       for(int i=0;i<n;i++)
       {
           balance+=p[i].petrol-p[i].distance;
           if(balance<0)
           {
               deficit+=balance;
               balance=0;
               start=i+1;
           }
       }
       if(deficit+balance>=0)
            return start;
        else
            return -1;
        
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
