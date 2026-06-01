#include<stdio.h>
int main()
{
    int n, sum = 0,fact=1,d,j,temp;
    printf("Enter a number: ");
    scanf("%d", &n);
     temp=n;
    while(n>0)
    {
        d=n%10;
        fact = 1;
        for(j=1;j<=d;j++)
        {
            fact = fact * j;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum == temp)
    {
        printf("%d is a strong number\n", temp);
    }
    else
    {
        printf("%d is not a strong number\n", temp);
    }
    return 0;
}
