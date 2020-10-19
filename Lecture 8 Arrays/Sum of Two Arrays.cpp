void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. Just fill the output in given output array.
     * Taking input and printing output is handled automatically.
     */
    
    int i=size1-1;
int j= size2-1;
int carry=0;
int k= max(size1,size2);

while(i>=0 && j>=0)
{
int sum =input1[i] +input2[j]+carry;
output[k]=sum %10;
carry=sum /10;
i--;
j--;
k--;
}
while(i>=0)
{
int sum =input1[i] +carry;
output [k]= sum %10;
carry=sum/10;
i--;
k--;
} 
while(j>=0)
{
int sum =input2[i] +carry;
output [k]= sum %10;
carry=sum/10;
j--;
k--;
} 
output[0]=carry;
}
