#include<stdio.h>
int main(){
    int n, m;
    printf("Enter the lower and upper limit :\n");
    scanf("%d%d",&n,&m);
    printf("Armstrong numbers between %d and %d are :\n",n,m);
    for(int i=n;i<=m;i++){
        int sum=0,temp=i,r;
        while(temp!=0){
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
    return 0;
}