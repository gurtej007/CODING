#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int gcd=v[0];
        for(int i=1;i<n;i++){
            gcd=__gcd(gcd,v[i]);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]/gcd<<" ";
        }
        cout<<"\n";
    }
}