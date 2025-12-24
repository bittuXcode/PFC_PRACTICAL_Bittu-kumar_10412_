#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) continue;
        sum=sum+i;
    }
    printf("sum of even number from 1 to %d is %d",n,sum);
    return 0;

}