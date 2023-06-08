#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            cin>>b[i];
        }
        
        long long ans=0;
        int acnt1=0,acnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                acnt1++;
            }
            if(a[i]==1){
                acnt2++;
            }
        }
        int bcnt1=0,bcnt2=0;
        for(int i=0;i<n;i++){
            if(b[i]==0){
                bcnt1++;
            }
            if(b[i]==1){
                bcnt2++;
            }
        }
        ans+=abs(acnt1-bcnt1);
        cout<<ans<<"\n";
    }
}