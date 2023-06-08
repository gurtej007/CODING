#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       
        for(int i=0;i<n;i++){
            cin>>b[i];
            
        }
        int maxi=0;
        int id=-2;
        for(int i=0;i<n;i++){
            if(k-i>=a[i]){
                if(b[i]>=maxi){
                    id=i;
                    maxi=b[i];
                }
            }
        }
    
        cout<<id+1<<"\n";
    }
}