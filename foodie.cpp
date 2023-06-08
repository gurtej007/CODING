#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,int n,int x,int &ans){
    int pl=abs(arr[0]-x);
    int pr=arr[0]+x;
    for(int i=1;i<n;i++){
        int cl=abs(arr[i]-x);
        int cr=arr[i]+x;

        if(cl>pr || cr<pl){
            ans+=1;
            pl=cl;
            pr=cr;
        }
        else{
            pl=max(cl,pl);
            pr=min(cr,pr);
        }
    }
    return ;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        solve(arr,n,x,ans);
        cout<<ans<<"\n";
    }
}