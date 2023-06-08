#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=1e9+7;


signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        for(int  i=0; i<n; i++){
            cin>>v1[i];
        }
        for(int i=0; i<n; i++){
            cin>>v2[i];
        }
        sort(v2.begin(), v2.end(),greater<int>());
        sort(v1.begin(), v1.end(),greater<int>());

        int i=0,j=0;
        int cnt=0;
        int ans=1;
        int x=0;
        while(i<n && j<n){
            if(v1[i]>v2[j]){
                cnt++;
                i++;
            }
            else{
                ans=(ans*(cnt-x))%m;
                x++;
                j++;
            }
        }
        while(j<n){
            ans=(ans*(cnt-x))%m;
            x++;
            j++;
        }
        cout<<ans%m<<"\n";
    }
}