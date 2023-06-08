#include<iostream>
using namespace std;

class time{
    int hrs;
    int min;

    friend class mins;
    public:
        void set(int a,int b){
            hrs=a;
            min=b;
        }
        void display(){
            cout<<"hrs="<<hrs<<"min="<<min<<"\n";
        }
};
class mins{
    int totalmin;
    public:
        void convert(time t){
            totalmin=t.hrs*60+t.min;
        }
        void show(){
            cout<<"totalmin="<<totalmin<<endl;
        }
};
int main(){
    time t;
    t.set(7,13);
    t.display();
    mins m;
    m.convert(t);
    m.show();

}