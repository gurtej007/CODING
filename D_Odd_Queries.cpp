#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        map<int,int> mp;
        int s=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[i]=s+x;
            s+=x;
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            l--;r--;
            int sum;
            if(l>0){
                sum=mp[r]-mp[l-1];
            }
            else{
                sum=mp[r];
            }
            int len=r-l+1;
            int diff=s+(len*k-sum);
            if((diff)%2==1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}