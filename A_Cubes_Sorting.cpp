#include<bits/stdc++.h>
using namespace std;
#define ll long long 
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
        bool f=0;
        for(int i=1;i<n;i++){
            if(v[i]>=v[i-1])
            {
                f=1;
            }
        }
        if (!f)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        
    }
}