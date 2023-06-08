#include<bits/stdc++.h>
using namespace std;
class X;
class Y{
    int b;
    
    public:
        void setdata(int m){b=m;}

        void add(X ,Y );
};
class X{
    int a;

    friend void Y::add(X,Y);
    public:
        void setdata(int n){a=n;}
};

void Y:: add(X a1, Y b1){
    cout<<a1.a+b1.b<<" ";
}
int main(){
    X a1;
    a1.setdata(5);
    Y b1;
    b1.setdata(4);
    b1.add(a1,b1);
}