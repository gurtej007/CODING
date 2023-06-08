#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1){
        if(a==b){
            cout<<1<<"\n";
            cout<<a<<":"<<b<<"\n";
        }
        else{
            cout<<0<<"\n";
            cout<<a<<":"<<b<<"\n";
        }
    }
    else{
        if((a+b)<=n){
            cout<<n-a-b<<"\n";
            while(n>1){
                if(a>0){
                    cout<<"1:0"<<"\n";
                    a--;
                    n--;
                }
                else if(b>0){
                    cout<<"0:1"<<"\n";
                    b--;
                    n--;
                }
                else{
                    cout<<"0:0"<<"\n";
                    n--;
                }
            }
            cout<<a<<":"<<b<<"\n";
        }
        else{
            cout<<0<<"\n";
            if(a>0 && b>0){
                if(a>b){
                    cout<<0<<":"<<b<<"\n";
                    b=0;
                }
                else{
                    cout<<a<<":"<<0<<"\n";
                    a=0;
                }
                n--;
            }
            while((a>0 || b>0) && n>1){
                if(a>0){
                    cout<<"1:0"<<"\n";
                    a--;
                    n--;
                }
                else if(b>0){
                    cout<<"0:1"<<"\n";
                    b--;
                    n--;
                }
            }
            cout<<a<<":"<<b<<"\n";
        }
    }   
}