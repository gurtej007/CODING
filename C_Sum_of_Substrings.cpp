#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int sum=0;
        int fidx=0,lidx=0;
        bool f=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                if(!f){
                    fidx=i;
                    f=1;
                }
                lidx=i;
            }
            string str=s.substr(i,2);
            sum+=stoi(str);
        }
        if(s[n-1]=='1'){
            if(!f){
                fidx=n-1;
            }
            lidx=n-1;
        }
        if(k==0){
            cout<<sum<<"\n";
            continue;
        }
        // cout<<lidx<<" "<<fidx<<"\n";
        if(lidx==n-1){
            if(fidx!=0 && fidx!=n-1 && fidx<=k){
                sum-=1;
            }
        }
        else{
            bool f=0;
            
            if(n-1-lidx<=k){
                f=1;
                if(lidx==0){
                    sum-=9;
                }
                else
                    sum-=10;
                k-=(n-1-lidx);
            }
            if(fidx!=lidx){
                if(k>0 && k>=fidx && fidx!=0){
                    sum-=1;
                }
            }
            else{
                if(k>0 && !f && k>=fidx && fidx!=0){
                    sum-=1;
                }
            }
        }
        cout<<max(0,sum)<<"\n";
    }
}