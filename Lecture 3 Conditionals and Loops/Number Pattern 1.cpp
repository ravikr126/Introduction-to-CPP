/********************************************
 * Number Pattern 1
Send Feedback
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
****************************************************/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
      int rows,i,j,k=0;
      cin>>rows;
  for(i=1;i<=rows;i++)
  {
  for(j=1;j<=i;++j)
  printf("%d",k+j);
  ++k;
  cout<<endl;
   
    }
  
}


