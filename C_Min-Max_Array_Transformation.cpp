#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    vector<ll> mini(n);
    while(i<n && j<n){
        if(a[i]<=b[j]){
            mini[i]=(b[j]-a[i]);
            i++;
        }
        else{
            j++;
        }
    }
    i=n-1;j=n-1;
    vector<ll> maxi(n);
    maxi[n-1]=b[j]-a[i];
    i--;
    while(j>=0 && i>=0){
        if(b[i]>=a[i+1]){
            maxi[i]=b[j]-a[i];
            i--;
        }
        else{
            maxi[i]=b[i]-a[i];
            j=i;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<mini[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<maxi[i]<<" ";
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