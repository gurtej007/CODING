#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> arr(n+1);
    for(ll i=0;i<n;i++){
        int x=s[i]-'0';
        arr[i+1]=x;
    }
    ll ans=0;
    vector<bool> vis(n+1,0);
    for(ll i=1;i<=n;i++){
       
        if(arr[i]==0){
            for(ll j=i;j<=n;j+=i){
                if(arr[j]==1){
                    break;
                }
                else if(vis[j]==1){
                    continue;
                }
                else{
                    vis[j]=1;
                    ans=ans+i;
                }
            }
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}