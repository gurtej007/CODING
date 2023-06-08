#include<stdio.h>

int main(){
    int days;
    scanf("%d",&days);
    int y=days/365;
    int w=(days%365)/7;
    int d=days-(y*365)-w*7;
    printf("years:%d ",y);
    printf("weeks:%d ",w);
    printf("days:%d ",d);
    return 0;
}