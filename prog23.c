#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int b;
    if(n>0){
        b=1;
    }
    else if(n<0){
        b=2;
    }
    switch(b){
        case 1:
            printf("positive");
            break;
        case 2:
            printf("negative");
            break; 
        default: printf("zero");
    }
    return 0;
}