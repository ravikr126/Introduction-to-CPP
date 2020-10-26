/************************************************************

Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

***************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int count = 1;
    
    int k = n/2 + 1;
    
    for(int i = 1; i <= k; i++)
    {
        
    
       int spaces = k - i;
    
       for(int j = 1; j <= spaces; j++)
       {
          cout << " ";
       }
    
       for(int j = 1; j <= count; j++)
       {
           cout << "*";
       }
        
        count = count + 2;
        cout << endl;
    }
    
    int m = n - k;
    count = count - 4;
    
    for(int i = m; i >= 1; i--)
    {
        int spaces = k - i;
        
        for(int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        
        for(int j = 1; j <= count; j++)
        {
            cout << "*";
        }
        
        count = count - 2;
        cout << endl;
    }
    
    
}