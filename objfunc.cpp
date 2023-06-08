#include<iostream>
using namespace std;


class complex{
    int real,imag;
    public:
      complex(int a,int b){
            real=a;
            imag=b;
      }
      complex add(complex &,complex &);
      void show(){
        cout<<real<<" +i"<<imag<<"\n";
      }
      complex(){};
      complex operator+(complex&);
      complex& operator--(int){
          cout<<"operator invoked"<<"\n";
          real-=1;  
          return *this;        
      }
};
complex complex :: operator+(complex &ob){
     cout<<"operator invoked1"<<"\n";
    complex temp;
    temp.real=real+ob.real ;
    temp.imag=imag+ob.imag ;
    return temp;
}
complex complex::add(complex &ob,complex &ob2){
      ob.real=ob2.real+ob.real ;
      ob.imag=ob2.imag+ob.imag;
      return ob;
}
int main(){
    complex c1(5,6);
    complex c2(1,3);
   
    (c1-- + c2).show();
    c1.show();
    (c2+c1).show();
}