#include<stdio.h>
int main()
{
    int n,temp,largest=0;
    printf("Enter a number: ");
    scanf("%d", &n);    
    printf("Factors of %d are: ", n);   
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            temp=i;
            int Prime=1;
            for(int j=2;j<=temp/2;j++)
            {
                if(temp%j==0)
                {
                    Prime=0;
                    break;
                }
            }
            if(Prime && temp>largest)
            {
                largest=temp;
            }
    
        }
    }
    printf("Largest prime factor of %d is: %d", n, largest);
    return 0;
}