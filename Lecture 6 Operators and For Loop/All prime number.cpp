/************************************************************

All Prime Numbers
Send Feedback
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19

*******************************************************/



#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n;
    cin>>n;
   
    for(int i=1;i<n;i++)
    {
         for(int j=1;j<i;j++)  
    
       {   
               if(i==j && j==1)
                {
                  if(i%j==0)
                  cout<<i;
                }
      }  
    }
      cout<< endl;
}