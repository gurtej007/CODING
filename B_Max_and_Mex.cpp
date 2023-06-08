#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int> mp;
        int maxi=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]=1;
            maxi=max(maxi,x);
        }
        int x=0;
        for(auto it:mp){
            if(it.first==x){
                x++;
            }
            else{
                break;
            }
        }
        if(x==n){
            cout<<mp.size()+k<<"\n";
            continue;
        }
        int z=(x+maxi)/2+(x+maxi)%2;
        if(k==0){
            cout<<mp.size()<<"\n";
            continue;
        }
        mp[z]=1;
        cout<<mp.size()<<"\n";
    }
}