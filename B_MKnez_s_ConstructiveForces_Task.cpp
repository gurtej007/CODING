#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==3){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            bool dir=1;
            if(n%2==0){
                for(int i=0;i<n;i++){
                    if(dir){
                        cout<<"1 ";
                    }
                    else{
                        cout<<"-1 ";
                    }
                    dir=!dir;
                }
            }
            else{
                for(int i=0;i<n/2;i++){
                    cout<<1-n/2<<" "<<n/2<<" ";
                }
                cout<<1-n/2;
            }
            cout<<"\n";
        }
    }
}