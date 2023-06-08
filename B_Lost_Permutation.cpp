#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int maxi=0,sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            maxi=max(maxi,x);
            sum+=x;
        }
        maxi=max(maxi,n);
        bool flag=0;
        int ans=sum+s;
        for(int i=maxi;i<=2000;i++){
            if(i*(i+1)/2==ans){
            
                flag=1;
                break;
                
            }
        }
        if(flag){
            cout<<"YES"<<"\n";
        }
        else
             cout<<"NO"<<"\n";
    }
}