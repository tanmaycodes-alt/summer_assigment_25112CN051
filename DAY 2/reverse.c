#include <stdio.h>
int main ()
{
    int N,reverse=0,d;
    printf("Enter the No. to be reversed :");
    scanf("%d",&N);
    while(N!=0)
{d=N%10;
    reverse=reverse*10+d;
    N=N/10;
}
printf("The reversed no. is %d",reverse);
return 0;
}