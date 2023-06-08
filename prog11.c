#include<stdio.h>

int main(){
    int a=3;
    int b=2;
    int temp=a;
    a=b;
    b=temp;
    printf("a:%d \n",a);
    printf("b:%d",b);
}