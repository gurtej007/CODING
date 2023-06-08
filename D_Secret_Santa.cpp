#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> cnt(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }
    int i=n-1;
    int j=1;
    int ans=0;
    while(i>=0 && j<=n){
        if(cnt[v[i]]>1){
            while(cnt[j]!=0){
                j++;
            }
            if(j!=(i+1)){
                cnt[v[i]]--;
                v[i]=j;
                j++;
                i--;
                ans++;
            }
            else{
                i--;
            }
        }
        else
            i--;

    }
    cout<<n-ans<<"\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}