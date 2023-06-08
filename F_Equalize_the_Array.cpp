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
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<int> arr;
        for(auto it: mp)
        {
            arr.push_back(it.second);
        }
        sort(arr.begin(), arr.end());
        int l=0;
        int h=arr.size()-1;
        if(arr[l]==arr[h]){
            cout<<"0\n";
            continue;
        }
        int ans=INT_MAX;
        int ans2=0;
        for(int j=0;j<arr.size();j++)
        {
            if(j>0 && arr[j]==arr[j-1]){
                ans2+=arr[j-1];
                continue;
            }
            int ans1=0;
            for(int i=j+1;i<arr.size();i++)
            {
                ans1+=arr[i]-arr[j];
            }
            if(j>0)
                ans2+=arr[j-1];
            ans=min(ans,ans1+ans2);
        }
        cout<<ans<<"\n";
        
    }
}