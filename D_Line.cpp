#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n;
    cin>>n;
    string s ;
    cin>>s;
    int i=0,j=n-1;
    vector<ll> v(n+1);
    ll sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            sum+=i;
        }
        else{
            sum+=n-1-i;
        }
    }
    int idx=1;
    while(i<j){
        if(s[i]=='R' && s[j]=='L'){
            i++;
            j--;

        }
        else if(s[i]=='L' && s[j]=='L'){
            sum-=i;
            sum+=n-1-i;
            i++;
            j--;
            v[idx++]=sum;
        }
        else if(s[i]=='R' && s[j]=='R'){
            sum-=n-1-j;
            sum+=j;
            j--;
            i++;
            v[idx++]=sum;
        }
        else{
            sum-=i;
            sum+=n-1-i;
            v[idx++]=sum;
            sum-=n-1-j;
            sum+=j;
            v[idx++]=sum;
            i++;
            j--;
        }
    }
    for(int i=idx;i<=n;i++){
        v[i]=sum;
    }
    for(int i=1;i<=n;i++){
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