#include<stdio.h>
int main ()
{
    int N,sum=0,d;
    printf("Enter the No.");
    scanf("%d",&N);
    while(N!=0)
    {
        d=N%10;
        sum=sum+d;
        N=N/10;

    }
    printf("The sum of digits is %d",sum);
    return 0;
}