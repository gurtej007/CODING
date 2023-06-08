#iclude<bits/stdc++.h>
using namespace std;
bool f(vector<int> arr,int k, vector<bool> &dp,int cnt,int h){
    if((k==0 || k==n-1) && h>=0){
        return 1;
    }
    if(dp[k]!=-1){
        return dp[k];
    }
    if(h+arr[k+1]>=0){
        vis[k+1]=1;
        dp[k+1]=f(arr,k+1,vis,cnt+1,h+arr[k+1]);
    }
    if(h+arr[k-1]>=0){
        dp[k-1]=f(arr,k-1,vis,cnt+1,h+arr[k-1]);
    }
    return dp[k]=l|r;
}
void solve(){
    int n,k;
    cin>>n>>k;
    k=k-1;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int h=arr[k];
    vector<int> dp(n,-1);
    if(f(arr,k,vis,k+1,h)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}