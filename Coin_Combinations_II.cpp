#include<bits/stdc++.h>
using namespace std;

int m=1e9+7;
int func(vector<int> &v,int k,int idx,vector<vector<int>> &dp){
    if(k==0){
        return 1;
    }
    if(idx==v.size()){
        return 0;
    }

    if(dp[idx][k] != -1)
    {
        return dp[idx][k];
    }

    int pick = 0;
    if(k>=v[idx])
        pick = func(v,k-v[idx],idx,dp);

    int notpick = func(v,k,idx+1,dp);

    return dp[idx][k] =  pick + notpick;
}

void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(k+1,0));
    // cout<<func(v,k,0,dp);
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 1;
    }

    

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
             int pick = 0;
            if(j >= v[i-1])
                pick = (dp[i][j-v[i-1]]);

            int notpick = (dp[i-1][j]);

            dp[i][j] = (pick + notpick)%m;
        }
    }

    cout<<(dp[n][k]);

    // for(int i=0;i<n;i++)
    // {
    //     for(int )
    // }

}

int main(){
    solve();
}