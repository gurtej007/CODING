#include<stdio.h>

int main(){
    int n;
    int ans=0,a=1;
    scanf("%d",&n);
    while(n>0){
        int x=n%2;
        ans=ans+x*a;
        a=a*10;
        n=n/2;
    }
    
    printf("binary:%d",ans);
}