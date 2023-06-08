#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
        }
        if(a==b){
            cout<<"0\n";
            continue;
        }
        if(b%a==0){
            ll x=b/a;
            bool f=0;
            int cnt=0;
            while(x>1){
                if(x%2==0){
                    x/=2;
                    cnt++;
                }
                else{
                    f=1;
                    break;
                }
            }
            if(f){
                cout<<"-1\n";
                continue;
            }
            int ans=0;
            while(cnt>0){
                if(cnt>=3){
                    ans+=cnt/3;
                    cnt=cnt-(cnt/3)*3;
                    
                }
                else if(cnt>=2){
                    ans+=cnt/2;
                    cnt=cnt-(cnt/2)*2;
                   
                }
                else{
                    cnt--;
                    ans++;
                }
            }
            cout<<ans<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}