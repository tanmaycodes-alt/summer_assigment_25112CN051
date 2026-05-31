#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum=0,temp=n,r;
    while(temp!=0){
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;
    }
    if(sum==n){
        printf("The number is an Armstrong number\n");
    }
    else{
        printf("The number is not an Armstrong number\n");
    }
    return 0;
}