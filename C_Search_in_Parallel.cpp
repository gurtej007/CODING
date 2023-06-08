#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end());
        vector<int> arr1,arr2;
        int x=min(a,b);
        int y=max(a,b);
        int cnt1=0,cnt2=0;
        for(int i=n-1;i>=0;i--){
            if((cnt1+x)<=(cnt2+y)){
                arr1.push_back(v[i].second);
                cnt1+=x;
            }
            else{
                arr2.push_back(v[i].second);
                cnt2+=y;
            }
        }
        if(x==a){
            cout<<arr1.size()<<" ";
            for(int i=0;i<arr1.size();i++){
                cout<<arr1[i]<<" ";
            }
            cout<<"\n";
            cout<<arr2.size()<<" ";
            for(int i=0;i<arr2.size();i++){
                cout<<arr2[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<arr2.size()<<" ";
            for(int i=0;i<arr2.size();i++){
                cout<<arr2[i]<<" ";
            }
            cout<<"\n";
            cout<<arr1.size()<<" ";
            for(int i=0;i<arr1.size();i++){
                cout<<arr1[i]<<" ";
            }
            cout<<"\n";
        }
    }
}