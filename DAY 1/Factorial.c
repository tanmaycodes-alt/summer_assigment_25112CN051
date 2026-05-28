#include<stdio.h>
int main()
{
int N,fact=1,i;
printf("Enter the NO.:");
scanf("%d",&N);
if(N<0)
{ printf("Factorial of negative integer is not possible");}
else{
for(i=1;i<=N;i++)
{
    fact=fact*i;

}
}
printf("The factorial of a given no. is %d",fact);
return 0 ;
}