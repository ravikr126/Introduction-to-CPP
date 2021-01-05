/*

Sort 0 1 2
Send Feedback
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
Note:
You need to change in the given array/list itself. Hence, no need to return or print anything. 
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers(all 0s, 1s and 2s) representing the elements in the array/list.
Output Format :
For each test case, print the sorted array/list elements in a row separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec
Sample Input 1:
1
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
Sample Input 2:
2
5
2 2 0 1 1
7
0 1 2 0 1 2 0
Sample Output 2:
0 1 1 2 2 
0 0 0 1 1 2 2

*/

//1st method

// arr - input array
// n - size of array
#include <bits/stdc++.h> 
using namespace std;


void sort012(int *arr, int n)
{
    //Write your code here
    int i=0,start=0,end=n-1;
   while(i<=end)
    {
        if(arr[i]==0)
        {
            int temp=arr[i];
            arr[i]=arr[start];
            arr[start]=temp;
            start++;
            i++;
        }
        else if(arr[i]==2)
        {
            int temp=arr[i];
            arr[i]=arr[end];
            arr[end]=temp;
            end--;
        
            }
       else
           i++;
        }
    
}

 
//2nd method
void sort012(int arr[], int n)  {  
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing output is handled automatically.
     */
    int lo = 0; 
	int hi = n - 1; 
	int mid = 0; 

	while (mid <= hi) { 
		switch (arr[mid]) { 

		case 0: 
			swap(arr[lo++], arr[mid++]); 
			break; 

		case 1: 
			mid++; 
			break; 
		case 2: 
			swap(arr[mid], arr[hi--]); 
			break; 
		} 
	} 
} 

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 /*
	int lo = 0; 
	int hi = n - 1; 
	int mid = 0; 

	while (mid <= hi) { 
		switch (arr[mid]) { 

		case 0: 
			swap(arr[lo++], arr[mid++]); 
			break; 

		case 1: 
			mid++; 
			break; 
		case 2: 
			swap(arr[mid], arr[hi--]); 
			break; 
		} 
	} 
} 

*/

//main code

#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}