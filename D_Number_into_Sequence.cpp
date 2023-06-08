#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=sqrt(n);
        int cnt=0;
        unordered_map<int,int> mp;
        int num=n;
        while(n%2==0){
            n/=2;
            cnt++;
        }
        mp[2]=cnt;
        for(int i=3;i<=x;i++){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            mp[i]=cnt;
        }
        int maxi=0;
        int f=0;
        for(auto it: mp){
            if(it.second-1>maxi){
                f=it.first;
                maxi=it.second-1;
            }
        }
        cout<<maxi+1<<"\n";
        for(int i=0;i<maxi;i++){
            cout<<f<<" ";
            num/=f;
        }
        cout<<num<<"\n";
    }
}