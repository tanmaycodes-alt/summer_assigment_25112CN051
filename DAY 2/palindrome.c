#include <stdio.h>
int main ()
{
    int N,reverse=0,d,temp;
    printf("Enter the No. to be reversed :");
    scanf("%d",&N);
    temp=N;
    while(N!=0)
{d=N%10;
    reverse=reverse*10+d;
    N=N/10;
}
if(temp==reverse)
    printf("The no. is a palindrome");
else
    printf("The no. is not a palindrome");
return 0;
}