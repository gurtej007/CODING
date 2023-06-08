#include<iostream>
using namespace std;

class item{
    int code;
    public:
      static int cnt[100];
      static int price[100];
    void add(int c){
        cnt[c]++;
    }
    void del(int c){
        cnt[c]--;
    }
    void tp(int c,int p){
        price[c]=p;
    }
    void cost(){
        int total=0;
        for(int i=0;i<100;i++){
            total+=price[i]*cnt[i];
        }
        cout<<"total price "<<total<<"\n";
    }
};
int item::cnt[100];
int item::price[100];
int main(){
    item i;
    i.add(10);
    i.add(5);
    i.add(6);
    i.tp(10,100);
    i.tp(5,200);
    i.tp(6,50);
    i.add(10);
    i.add(5);
    i.add(6);
    i.add(10);
    i.add(5);
    i.add(6);
    i.del(6);
    i.del(5);
    i.cost();
}
