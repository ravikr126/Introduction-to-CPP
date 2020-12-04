/***************************************************************
Code : Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
************************************************************/
 
#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
       int n , i, j, num = 1, gap; 
    cin>>n;
    gap = n - 1;
    j=1;
  while(j<=n)
    { 
        num = j; 
         i=1;
      while(i<=gap){
           cout << " "; 
          i++;
      }
        gap --; 
      i=1;
      while(i<=j){
            cout << num; 
            num++; 
            i++;
        } 
        num--; 
        num--; 
      i=1;
      while(i<j){
            cout << num; 
            num--; 
            i++;
        } 
        cout << endl; 
        j++;
     
} 
}




