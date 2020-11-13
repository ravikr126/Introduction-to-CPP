/*

Trim Spaces
Send Feedback
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi

*/


#include<cstring>
void trimSpaces(char input[]) {
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print or return the output.
   *  Change in the given input string itself.
   *  Taking input and printing output is handled automatically.
   */
 

	// To keep track of non-space character count 
	int count = 0; 

	// Traverse the given string. If current character 
	// is not space, then place it at index 'count++' 
	for (int i = 0; input[i]; i++) 
		if (input[i] != ' ') 
			input[count++] = input[i]; // here count is 
								// incremented 
	input[count] = '\0'; 
} 

//main code

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

