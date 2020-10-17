/************************************************************

Number Star Pattern
Send Feedback
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1

**************************************************************/

#include<iostream>
using namespace std;


int main(){

  int n;
  cin>>n;
 for(int i=1;i<=n;i++)
 {
     {
       for(int k=1;k<=n+1-i;k++)
       {
           cout<<k;
       }
         for(int k=1;k<i;k++)
         {
             cout<<"**";
         }
         for(int k=n+1-i;k>=1;k--)
         {
              cout<<k;
         }
     }
     cout<<endl;
 }
}