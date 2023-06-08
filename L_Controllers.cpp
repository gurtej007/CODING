#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;
    cin>>q;
    int pos=0,neg=0;;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            pos++;
        }
        else{
            neg++;
        }
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        if(y>x){
            swap(x,y);
        }
        if(pos==neg){
            cout<<"YES\n";
            continue;
        }
        bool f=0;
        if(pos>neg){
            int p=pos,n=neg;
            p-=n;
            int sum=n*(x-y);
            n=0;
            
            if(p*y==sum || p*x==sum ){
                cout<<"YES\n";
                continue;
            }
            else{
                int z=(x+y);
                sum/=z;
                if(p>=2*sum){

                }
                else{
                    cout<<"NO\n";
                }
            }
        }
        if(neg>pos){
            int p=pos,n=neg;
            n-=p;
            int sum=p*(x-y);
            p=0;
            if(n*y==sum || n*x==sum ){
                cout<<"YES\n";
            }
            else{
                
                else
                    cout<<"NO\n";
            }
        }
    }
}     