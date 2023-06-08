#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> e,o;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x%2==1){
                o.push_back(x);
            }
            else{
                e.push_back(x);
            }
        }
        sort(e.begin(),e.end(),greater<int>());
        sort(o.begin(),o.end());
        int i=0;
        int j=0;
        int ans1=0,ans2=0;
        while(i<e.size()){
            ans1+=e[i++];
        }
        bool f=0;
        while(j<o.size()){
            ans2+=o[j++];
            if(ans2>=ans1){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}