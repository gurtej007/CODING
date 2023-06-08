#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int id1,id2,id;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==1){
                id1=i+1;
            }
            if(v[i]==2){
                id2=i+1;
            }
            if(v[i]==n){
                id=i+1;
            }
        }
        if(id1<id && id2<id){
            if(id1>id2){
                cout<<id1<<" "<<id<<"\n";
            }
            else{
                cout<<id2<<" "<<id<<"\n";
            }
        }
        else if(id1>id && id2>id){
            if(id1>id2){
                cout<<id2<<" "<<id<<"\n";
            }
            else{
                cout<<id1<<" "<<id<<"\n";
            }
        }
        else{
            cout<<1<<" "<<1<<"\n";
        }
        
    }
}