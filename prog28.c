#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        int temp=a;
        a=b;
        b=temp+b;
    }
    return 0;
}