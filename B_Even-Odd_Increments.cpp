#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum=0;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            sum=sum+v[i];
            if(v[i]%2!=0){
                c1++;
            }
            else{
                c2++;
            }
        }
        while(q--){
            int x,y;
            cin>>x>>y;
            long long ans=0;
            if(x==0){
                ans=sum+y*c2;
                if(y%2!=0){
                    c1=c1+c2;
                    c2=0;
                }
                sum=ans;
            }
            else if(x==1){
                ans=sum+y*c1;
                if(y%2!=0){
                    c2=c2+c1;
                    c1=0;
                }
                sum=ans;
            }
            cout<<ans<<"\n";
            
        }
        
    }
}