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
    
      int rows,i=1;
      cin>>rows;
 
      while(i<=rows)
  {
int col=1;
int value =i;

      while(col<=i){
      cout<<value;
              value++;
col++;
          }
     
     cout<<endl;
   i++;
    }
  
}



