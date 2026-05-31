#include<stdio.h>
int main()
{
    int n ,first = 0, second = 1, next, i;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
if (n==1)
    printf("%d",first);
else if (n==2)
    printf("%d %d",first,second);
else
{
    printf("%d %d",first,second);
    for (i = 3; i <= n; i++)
    {
        next = first + second;
        printf(" %d",next);
        first = second;
        second = next;
    }
}
}