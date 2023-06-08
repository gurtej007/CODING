#include<bits/stdc++.h>
using namespace std;

 


void solve(){
    long long  a,b,c,d;
    cin >> a >> b >> c>> d;
    long long  i=a+1,j=b+1;
    while(i<=c){
        
        long long k=a*b/__gcd(i,a*b);
       
        if(b/k!=d/k){
            cout<<i<<" "<<(b/k+1)*k<<"\n";
            return ;
        }
        
        i++;
    }
    cout<<-1<<" "<<-1<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}