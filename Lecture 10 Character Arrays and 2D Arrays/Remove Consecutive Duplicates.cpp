/*

Remove Consecutive Duplicates
Send Feedback
For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
 Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aabccbaa
Sample Output 1:
abcba
Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx
*/


// input - given string
// You need to update in the input string itself. No need to return or print anything
#include <bits/stdc++.h> 
using namespace std; 

#include<cstring>
string removeConsecutiveDuplicates(string str) {
    // Write your code here
	
       
int n=str.length();
if(n==0)
return str;

string answer;
answer.push_back(str[0]);

for(int i=1;i<n;++i)
{
if(str[i] !=str[i-1])
{
answer.push_back(str[i]);
}
}
return answer;
}
  
    
    
    
    
    //by recursion
    /*if (input[0] == '\0') 
		return; 

	// if the adjacent characters are same 
	if (input[0] == input[1]) { 
		
		// Shift character by one to left 
		int i = 0; 
		while (input[i] != '\0') { 
			input[i] = input[i + 1]; 
			i++; 
		} 

		// Check on Updated String S 
		removeConsecutiveDuplicates(input); 
	} 

	// If the adjacent characters are not same 
	// Check from S+1 string address 
removeConsecutiveDuplicates(input + 1); 
} 
*/




// main code

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}