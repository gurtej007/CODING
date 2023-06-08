#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &v,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int z=2;
    int ans=n;
    while(z<=n){
        if(sum%z!=0){
            z++;
        }
        else{
            int s=sum/z;
            int x=0;
            int i=0;
            bool f=1;
            int len=0,res=0;
            while(i<n){
                x+=v[i];
                if(x==s){
                    x=0;
                    res=max(res,++len);
                    len=0;
                    i++;
                }
                else if(x>s){
                    f=0;
                    break;
                }
                else{
                    len++;
                    i++;
                }
            }
            if(f){
                ans=min(ans,res);
            }
            z++;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i]; 
        }
        solve(v,n);
    }
}