#include<stdio.h>
int main()
{
    int i=0,N;
    printf("Enter your Number : ");
    scanf("%d",&N);
    while(N!=0)
   { N=N/10;
    i++;
   }
   printf("NO. of digit is %d",i);
   return 0;

}