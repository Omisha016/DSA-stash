//
//  Addarray.cpp
//  Array
//
//  Created by Omisha Gupta on 18/07/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Add(vector<int>a,int n1,vector<int>b, int n2)
{
    vector<int> v;
    int carry=0;
    int sum=0;
    int i=n1-1,j=n2-1;
    while(i>=0 && j>=0)
    {
        int val1=a[i];
        int val2=b[j];
        sum =val1+val2+carry;
        carry=sum/10;
        v.push_back(sum%10);
        i--;
        j--;
    }
    
    while(i>=0)
    {
        sum =a[i]+carry;
        carry=sum/10;
        v.push_back(sum%10);
        i--;
    }
    
    while(j>=0)
    {
        int val2=b[j];
        sum =val2 +carry;
        carry=sum/10;
        v.push_back(sum%10);
        j--;
    }
    
    while(carry!=0)
    {
        sum =carry;
        carry=sum/10;
        v.push_back(sum%10);
    }
    
    reverse(v.begin(),v.end());
    
    for(int t:v)
    {
        cout<<t<<" ";
    }cout<<endl;
    
}
int main()
{
    vector <int>v1;
    int n1;
    cout<<"Enter the number of elements"<<endl;
    cin>>n1;
    
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<endl;
    
    vector <int>v2;
    int n2;
    cout<<"Enter the number of elements"<<endl;
    cin>>n2;
    
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    cout<<endl;
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    Add(v1,n1,v2,n2);
    return 0;
}

