#include<iostream>  
using namespace std;  

int mul(int a,int b)  
{  
    return a*b;  
}  
float mul(double x, int y)  
{  
    return x*y;  
}  
int main()  
{  
    int ans1 = mul(6,7);  
    float ans2 = mul(0.2,3);   
    cout << "ans1 is : " <<ans1<<endl;  
    cout <<"ans2 is : "  <<ans2<<endl;  
    return 0;  
}  