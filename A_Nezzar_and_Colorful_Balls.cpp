#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxfreq=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            maxfreq=max(maxfreq,++mp[x]);
        }
        cout<<maxfreq<<endl;
    }
}