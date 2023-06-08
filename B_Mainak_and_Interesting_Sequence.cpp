#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        
        if(n==1){
            cout<<"Yes\n"<<m<<"\n";
        }
        else if(m<n || (m%2==1 && n%2==0) ){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
            if(m%2==0){
                while(m%n!=0){
                    cout<<"1 1 ";
                    m-=2;
                    n-=2;
                }
                for(ll i=0;i<n;i++){
                    cout<<m/n<<" ";
                }
                cout<<"\n";
            }
            else{
                for(int i=0;i<n-1;i++){
                    cout<<"1 ";
                }
                cout<<m-(n-1)<<"\n";
            }
        }
    }
}