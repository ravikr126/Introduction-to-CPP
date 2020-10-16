/******************************************************************
 * Sum of Even Numbers till N
Send Feedback
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*******************************/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
   
    int i, num;
    int Sum=0;
    cin>>num;
    i=1;
    while(i<=num){
        if(i%2==0)  
            Sum=Sum+i;
             i++;
    }
    cout<<Sum;

}


