#include<iostream>
using namespace std;

class election{
    public:
        int count[5]={0,0,0,0,0};
        int sbp=0;
        void vote(int v){
            if(v>=1 && v<=5){
                count[v-1]++;
            }
            else{
                sbp++;
            }
        }
        void cnt(){
            for(int i=0;i<5;i++){
                cout<<"candidate "<<i+1<<" got "<<count[i]<<" votes"<<"\n";
            }
            cout<<"no of spoilt ballots is"<<sbp<<"\n";
        }
};
// int election::count[5]={0,0,0,0,0};
int main(){
    election e;
    e.vote(2);
    e.vote(5);
    e.vote(6);
    e.vote(3);
    e.vote(5);
    e.vote(1);
    e.vote(5);
    e.vote(1);
    e.vote(3);
    e.vote(7);
    e.cnt();
}