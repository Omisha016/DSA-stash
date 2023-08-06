//
//  Intersection.cpp
//  Array
//
//  Created by Omisha Gupta on 16/07/23.
//

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a[4]={2,2,3,3};
//    int b[6]={1, 2, 2, 2, 3, 4};
//    for(int i=0;i<6;i++)
//    {
//        for(int j=0;j<4;j++)
//        {
//            if(a[j]==b[i])
//            {
//                cout<<b[i]<<endl;
//                //REPLACE THE VALUE BY SOMETHING ELSE
//                a[j]=INT_MAX;
//                break;
//            }
//        }
//    }
//    return 0;
//
//}

//more optimised solution
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i=0,j=0;
    int a[6]={1, 2, 2, 2, 3, 4};
    int b[4]={2,2,3,3};
    
    
    while(i<6 && j<4)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<endl;
            i++;
            j++;
            continue;
        }
        else if (a[i]<b[j])
        {
            i++;
            continue;
        }
        else
        {
            j++;
            continue;
        }
    }
    return 0;
}
