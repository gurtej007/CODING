#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        
        int sum=0;
        int i=n-1;
        
        while(i>=(n-k)){
            sum+=v[i-k]/v[i];
            i--;
        }
        
        for(int i=0;i<n-2*k;i++){
            sum+=v[i];
        }
        cout<<sum<<"\n";
    }
}