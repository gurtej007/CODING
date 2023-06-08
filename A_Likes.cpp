#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int pos=0,neg=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]>0){
                pos++;
            }
            else{
                neg++;
            }
        }
        for(int i=1;i<=pos;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<=neg;i++){
            cout<<pos-i<<" ";
        }
        cout<<"\n";
        for(int i=1;i<=neg;i++){
            cout<<"1 0 ";
        }
        pos-=neg;
        for(int i=1;i<=pos;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}