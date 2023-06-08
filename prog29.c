#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num=n;
    int ans=0;
    while(n>0){
        ans=ans*10+n%10;
        n=n/10;
    }
    if(num==ans){
        printf("num is palindrome");
    }
    else{
        printf("num is not palindrome");
    }
    return 0;
}