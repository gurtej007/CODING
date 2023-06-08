#include<bits/stdc++.h>
using namespace std;
int solve(int num,int n){
    vector<int> v(n);
    int x=num;
    int i=n-1;
    while(x>0 && i>=0){
        v[i--]=x%10;
        x/=10;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num;
        cin>>num;
        int ans=solve(num,n);
        cout<<ans<<"\n";
    }
}