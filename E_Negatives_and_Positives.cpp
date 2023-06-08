#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        ll sum=0;
        int neg=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=abs(v[i])
            ;
            if(v[i]<0){
                neg++;
            }
        }    
        for(int i=0;i<n;i++){
           
            v[i]=abs(v[i]);
           
        }
        if(neg%2==0){
            cout<<sum<<"\n";
            
        }
        else{
            ll mn=*min_element(v.begin(),v.end());
            cout<<sum-2*mn<<"\n";
        }
        
       
    }
}