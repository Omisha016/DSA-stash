//
//  squarerootofFloat.cpp
//  Array
//
//  Created by Omisha Gupta on 17/07/23.
//

#include <iostream>

using namespace std;

long long int BinarySearch(int n)
    {
      int s=0,e=n;
      int mid=s+(e-s)/2;
      long long int ans=0;
      while(s<=e)
      {
          long long int sq=mid*mid;
          if(sq==n)
          {
              return mid;
          }
          else if(sq<n)
          {
              ans=mid;
              s=mid+1;
          }
          else
          {
              e=mid-1;
          }
          mid=s+(e-s)/2;
      }
      return ans;
    }

double finalans(double n,int precision)
{
    double intsol=BinarySearch(n);
    double factor=1;
    for(int i=0;i<precision;i++)
    {   factor=factor/10;
        for(double j=intsol;j*j<n;j=j+factor)
        {
            intsol=j;
        }
            }
    return intsol;
}

int main()
{
    cout<<finalans(36.75,3)<<endl;
}
