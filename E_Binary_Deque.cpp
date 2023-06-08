#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> v(n),pos(n);
        int sum=0;
        for(int k=0;k<n;k++){
            cin>>v[k];
            sum+=v[k];
            pos[k]=sum;
        }
        if(sum<s){
            cout<<"-1\n";
            continue;
        }
        int i=0;
        int ans=0;
        while(i<n){
            
            int j=i;
            int x=s+pos[i];
            
            while(j<n && pos[j]<=x){
                j++;        
            } 
            if(pos[j]>=x){
                ans=max(ans,j-i);
            }
            int z=i+1;
            while(z<n && pos[z]==pos[z-1]){
                z++;
            }
            i=z;
        }
        
        cout<<n-ans<<"\n";

    }
}