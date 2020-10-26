/*************************************************

Code : Star Pattern
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

*****************************************************************/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int i,j;
    int n;
    cin>>n;
    for(i=1; i<=n; i++)
    { 
        for(j=i; j<n; j++)
        {
            cout<<' ';
        }
        for(j=1; j<=(2*i-1); j++)
        {
            cout<<'*';
        }
         cout<<endl;
    }
}



