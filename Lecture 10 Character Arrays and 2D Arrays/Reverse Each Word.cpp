/*


Reverse Each Word
Send Feedback
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
Input Format:
The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence given to Aadil.
Output Format:
The only line of output prints the sentence(string) such that each word in the sentence is reversed. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN
Sample Input 2:
Always indent your code
Sample Output 2:
syawlA tnedni ruoy edoc

*/


// input - given string
// Update in the given input itself. No need to return or print anything
#include <bits/stdc++.h> 
#include<cstring>
using namespace std; 
void reverseEachWord(char input[]) {

 int l,a,b,i;
l=strlen(input);
  a=0;
  for(i=0;i<=l;i++)
  {
    if(input[i]==' ' || input[i]=='\0')
    {
      b=i-1;
      while(a<b)
      {
        char temp=input[a];
        input[a]=input[b];
        input[b]=temp;
        a++;
          b--;
      }
      a=i+1;
    }
  }
	
} 




//main code


#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}