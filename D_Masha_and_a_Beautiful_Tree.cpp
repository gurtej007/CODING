#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int d=2;
        int p=1;
        bool flag=0;
        int cnt=0;
        while(d<=n){
            for(int i=0;i<n;i+=d){
                if(abs(v[i]-v[i+p])!=p){
                    cout<<-1<<"\n";
                    flag=1;
                    break;
                }
                if(v[i]>v[i+p]){
                    swap(v[i],v[i+p]);
                    cnt++;
                }
            }
            p=p*2;
            d=d*2;
            if(flag){
                break;
            }
        }
        if(!flag)
            cout<<cnt<<"\n";
    }
}