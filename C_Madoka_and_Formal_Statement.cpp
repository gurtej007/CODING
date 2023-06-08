#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1),b(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        a[n]=a[0];
        b[n]=b[0];
        bool f=1;
        for(int i=0;i<n;i++){
            if(b[i]<a[i]){
                f=0;
                break;
            }
            int diff=b[i]-a[i];
            if(diff==0){
                continue;
            }
            int maxi=max(a[i+1],b[i+1]);
            if(a[i]>maxi){
                f=0;
                break;
            }
            int d=maxi-a[i]+1;
            if(d<diff){
                f=0;
                break;
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}