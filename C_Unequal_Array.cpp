#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;

        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                cnt++;
            }
        }
        if(cnt<=1){
            cout<<0<<"\n";
            continue;
        }
        int id1=-1,id2=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                if(id1==-1){
                    id1=i+1;
                }
                else{
                    id2=i;
                }
            }
        }
        if(id1==id2){
            cout<<"1\n";
        }
        else{
            cout<<id2-id1<<endl;
        }

    }
}