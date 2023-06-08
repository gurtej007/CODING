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
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(), v.end());
        int div;
        if(sum%(n-1)==0){
            div=sum/(n-1);
        }
        else{
            div=sum/(n-1)+1;
        }
        int k=max(div,v[n-1]);
        cout<<(n-1)*k-sum<<"\n";
    }
}