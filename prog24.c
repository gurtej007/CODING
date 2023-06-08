#include<stdio.h>

int main(){
    int ans=0;
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        ans+=i%10;
    }
    printf("%d\n",ans);
}