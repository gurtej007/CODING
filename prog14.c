#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("sum of digits of 5 digit number:%d",sum);
}