#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ab=0,aw=1;
        ll bb=0,bw=0;
        vector<ll> v;
        ll x=1;
        int z=1;
        n--;
        while(n>=(1+4*z)){
            v.push_back(1+4*z);
            n-=(1+4*z);
            z++;
        }
        v.push_back(n);
        
        bool f=1;
        for(int i=0;i<v.size();i++){
            if(f){
                if(v[i]%2){
                    bb+=(v[i])/2+1;
                    bw+=(v[i]/2);
                }
                else{
                    bb+=(v[i])/2;
                    bw+=(v[i]/2);
                }
            }
            else{
                if(v[i]%2){
                    aw+=(v[i])/2+1;
                    ab+=(v[i])/2;
                }
                else{
                    ab+=(v[i])/2;
                    aw+=(v[i]/2);
                }
            }
            f=!f;
        }
       
        cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<"\n";
    }
}