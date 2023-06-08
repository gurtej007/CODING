#include<bits/stdc++.h>
using namespace std;

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
        int ans=0;
        bool f=0;
        bool f1=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==-1 && v[i+1]==-1){
                v[i]=1;
                v[i+1]=1;
                f=1;
                break; 
            }
            if(v[i]==-1){
                f1=1;
            }
        }
        if(v[n-1]==-1){
            f1=1;
        }
        if(f){
            for(int i=0;i<n;i++){
                ans+=v[i];
            }
        }
        else{
            if(f1){
                for(int i=0;i<n;i++){
                    ans+=v[i];
                }
            }
            else{
                for(int i=0;i<n;i++){
                    ans+=v[i];
                }
                ans-=4;
            }
        }
        cout<<ans<<"\n";
    }
}