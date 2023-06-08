#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("No. is not prime");
            flag=1;
            break;
        }
    
    }
    if(flag==0){
        printf("No. is prime");
    }
    
    return 0;
}