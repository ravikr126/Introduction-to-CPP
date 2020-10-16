/********************************************************
 * Number Pattern 2
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
Sample Input :
5
Sample Output :
          1
        23
      345
    4567
  56789
  **********************************************/
 #include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
    int i, j, k, N;
cin>>N;
   

    for(i=1; i<=N; i++)
    {
        k = i;
        for(j=i; j<N; j++)
        {
         cout<<" ";
        }
        for(j=1; j<=i; j++, k++)
        {
            cout<<k;
        }

        cout<<endl;
    }

}


