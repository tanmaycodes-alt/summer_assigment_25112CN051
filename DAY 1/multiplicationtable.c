#include<stdio.h>
int main()
{
    int N,i,table ;
printf("Enter the NO. of which table you need : ");
scanf("%d",&N);
for(i=1;i<=10;i++)
{
table=N*i;
printf("%d x %d = %d",N,i,table);
printf("\n");
}
return 0;
}