#include<stdio.h>
int main()
{
    int n ,first = 0, second = 1, next, i,temp;
    printf("Enter the term you want to find :\n");
    scanf("%d",&n);
    printf("Fibonacci Term: ");
    if (n==1)
        temp = first;
    else if (n==2)
        temp = second;
    else if (n>2)
{
    for (i = 3; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }  temp = next;
}
else{
    printf("Invalid input");
}
printf("%d",temp);
    return 0;
}