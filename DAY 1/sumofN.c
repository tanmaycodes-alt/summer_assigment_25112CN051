#include<stdio.h>
int main()
{int N,i,sum=0;
printf("Enter the value of N : ");
scanf("%d",&N);
for(i=0;i<=N;i++)
{sum=sum+i;}
printf("Sum of N natural no. is %d",sum);
return 0;
}