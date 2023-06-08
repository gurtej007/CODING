#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int l=0;
        int h=n;
        int len=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(sum+i==k){
                len=i;
                break;
            }
            if(sum+i>k){
                break;
            }
            sum+=i;
        }
        if(len>0){
            for(int i=1;i<=len;i++){
                cout<<i<<" ";
            }
            for(int i=len+1;i<=n;i++){
                cout<<-1000<<" ";
            }
            cout<<"\n";
        }
        else{
            int sum=0;
            for(int i=1;i<=n;i++){
                if(sum+i==(n*(n+1)/2-k)){
                    len=i;
                    break;
                }
                if(sum+i>(n*(n+1)/2-k)){
                    break;
                }
                sum+=i;
            }
            if(len>0){
                for(int i=1;i<=len;i++){
                    cout<<i*-1<<" ";
                }
                for(int i=len+1;i<=n;i++){
                    cout<<1000<<" ";
                }
                cout<<"\n";
            }
            else{
                cout<<1<<"\n";
                for(int i=0;i<k/2;i++){
                    cout<<
                }
            }
        }
        

    }
}