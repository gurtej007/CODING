#include<stdio.h>

int solve(int a){
    if(a==0 || a==1 ){
        return 1;
    }
    return a*solve(a-1);
}
int main(){
    int a;
    scanf("%d",&a);
    int ans=solve(a);
    printf("%d\n", ans);
}