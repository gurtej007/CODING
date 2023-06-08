#include<bits/stdc++.h>
using namespace std;

#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j]; 
            }   
        }
        vector<vector<int>> arr(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=v[j][i];
            }

            sort(arr[i].begin(),arr[i].end());
            if(i>0){
                for(int j=0;j<n;j++){
                    arr[i][j]+=arr[i-1][j];
                }
            }
        } 
        int sum=arr[m-1][0];
        
        int ans=0;
        for(int i=1;i<n;i++){
            ans+=(i*arr[m-1][i])-sum;
            sum+=arr[m-1][i];
        }
        cout<<ans<<"\n";
    }
}