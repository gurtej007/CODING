#include<bits/stdc++.h>
using namespace std;

class simple{
    int a,b;
    
        void set(int x,int y){
            a=x;
            b=y;
        }
        int get1(){
            return a;
        }
        int get2(){
            return b;
        }
        void show(){
            cout<<"a*b= "<<a*b<<"\n";
            cout<<"a/b= "<<a/b<<"\n";
            cout<<"a-b= "<<a-b<<"\n";
            cout<<"a+b= "<<a+b<<"\n";
        }
};
class sci{
    int a,b;
    protected:
        void setdata(int x,int y){
            a=x;
            b=y;
        }
        int getdata1(){
            return a;
        }
        int getdata2(){
            return b;
        }
        void showdata(){
            cout<<"a%b="<<a%b<<"\n";
            cout<<"gcd(a,b)="<<__gcd(a,b)<<"\n";
        }
};

class hybrid: public simple,public sci{
    public:
    
    void display(){
        setdata(20,15);
        cout<<"simple calculator"<<"\n";
        show();
        cout<<"scientific calculator"<<"\n";
        showdata();
    }
    
};

int main(){
    hybrid h;
    h.set(10,5);
   
    h.display();
}