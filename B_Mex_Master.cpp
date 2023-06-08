#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        bool f=0;
        int cnt=0;
        int maxi=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==0){
                f=1;
                cnt++;
            }
            maxi=max(maxi,v[i]);
        }
        if(!f){
            cout<<"0\n";
            continue;
        }
        if((n-cnt)+1>=cnt){
            cout<<"0\n";
        }
        else{
            if(maxi==1){
                cout<<"2\n";
                continue;
            }
            cout<<"1\n";
        }
    }
}