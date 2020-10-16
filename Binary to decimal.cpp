/**********************************************************************
Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   long long num;
   int decimalNum, i, rem;
    cin >> num;

   decimalNum = 0;
   i = 0;
    while (num != 0)
   {
      rem = num % 10;
      num /= 10;
      decimalNum += rem * pow(2, i);
      ++i;
   }

   cout << decimalNum << endl;
}