#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int gcd;
        vector<int> v(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            
            cin>>v[i];
            maxi=max(maxi,v[i]);

        }
        gcd=v[0];
        for(int i=1;i<n;i++){
            gcd=__gcd(gcd,v[i]);
        }
        cout<<maxi/gcd<<"\n";
    }
}