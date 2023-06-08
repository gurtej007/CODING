#include<stdio.h>
#include<math.h>
float solve3(int a,int b,int c){
    float s=(a+b+c)/2;
    return pow(s*(s-a)*(s-b)*(s-c),0.50);
}
int solve2(int a,int b){
    return a*b;
}
int  solve1(int a){
    return a*a;
}
float solve4(int b){
    return 3.14*b*b;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sqarea=printf("square area %d\n",solve1(a));
    int recarea=printf("rectangle area %d\n",solve2(a,b));
    int triarea=printf("triangle area %f\n",solve3(a,b,c));
    float carea=printf("circle area %f",solve4(b));
}