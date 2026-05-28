#include <stdio.h>
int main ()
{
    int N,product=1,d;
    printf("Enter the No. whose product of digits is to be found :");
    scanf("%d",&N);
    while(N!=0)
{d=N%10;
    product=product*d;
    N=N/10;
}
printf("The product of digits is %d",product);
return 0;
}