#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int ans=0;
        int i=1;
        int maxi=1;
        while(i<n){
            int j=i+1;
            int z=maxi;
            while(j<n && z>0){ 
                while(j<n && v[j]>v[j-1]){
                    j++;
                }
                z--;
                if(z>0){
                    j++;
                }
            }
            ans++;
            maxi=j-i;
            i=j;
            
        }
        cout<<ans<<endl;
    }
}