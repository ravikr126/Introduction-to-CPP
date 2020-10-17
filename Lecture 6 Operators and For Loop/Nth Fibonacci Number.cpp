/********************************************************

Nth Fibonacci Number
Send Feedback
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
Integer n
Output Format :
Nth Fibonacci term i.e. F(n)
Constraints:
1 <= n <= 25
Sample Input 1:
4
Sample Output 2:
3 
Sample Input 1:
6
Sample Output 2:
8


*********************************************************///

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
     int n,sum;
    int a=1,b=1,c;
    cin>>n;
    for(int i=0;i<n-2;i++)
    {
    c=0;
    c=a+b;
    a=b;
    b=c;
   sum=c;
    }

    cout<<sum<<endl;
  
}