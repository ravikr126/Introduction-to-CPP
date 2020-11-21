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

int main(){

    
    int N;
   
    cin>>N;
   
  	for(int i = 2; i<=N; i++){
         bool divisible = true;
        for (int j = 2; j<i; j++){
           if (i%j == 0){
                divisible = false;
            	break;
}}
           
            
        
        if(divisible){
            cout<<i<<endl;
    }
    
    }
}
    



  //with fun
#include <bits/stdc++.h> 
using namespace std; 

bool isPrime(int n) 
{ 

	if (n <= 1) 
		return false; 

	
	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return false; 

	return true; 
} 
void printPrime(int n) 
{ 
	for (int i = 2; i <= n; i++) { 
		if (isPrime(i)) 
			cout << i << endl; 
	} 
} 

int main() 
{ 
	int n ; 
    cin>>n;
	printPrime(n); 
} 

    


