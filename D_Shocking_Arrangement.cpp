#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if(v[0]>=0){
            cout<<"No\n";
            continue;
        }
        int d=v[n-1]-v[0];
        vector<int> ans;
        int j=0,i=n-1;
        bool f=1;
        int sum=0;
        while(i>=j\){
            if(sum+v[i]>=d){
                ans.push_back(v[j]);
                if(sum+v[j]>=d){
                    f=0;
                    break;
                }
                sum+=v[j];
                j++;
            }
            else{
                ans.push_back(v[i]);
                sum+=v[i];
                i--;
            }
        }
        if(f){
            cout<<"Yes\n";
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"No\n";
        }
    }
}