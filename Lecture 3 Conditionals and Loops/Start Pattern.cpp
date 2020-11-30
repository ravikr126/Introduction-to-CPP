/*******************************************************************
 * Start Pattern
Send Feedback
Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******

 *************************************/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
 int row, c, n;

    cin>>n;
    row=1;
   
       while(row<=n) 
  {
           c=1;
    
        while(c<=n-row){
      cout<<" ";
            c++;
        }
          c=1;
    for (c = 1; c <= 2*row - 1; c++)
        while(c<=2*row-1){
      cout<<"*";
            c++;
        }
    row++;
    cout<<endl;
  }
}






