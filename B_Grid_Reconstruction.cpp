#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(2,vector<int>(n,0));
        v[0][0]=2*n-1;
        v[1][n-1]=2*n;
        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++){
            arr[i]=i+1;
        }
       
        int k=(2*n-1)/2;
        int z=2*n-3;
        for(int j=1;j<n;j++){
            
            if(j%2==1){
                v[0][j]=arr[k];
                k-=2;
            }
            else{
                v[0][j]=arr[z];
                z-=2;
            }
        }
        for(int i=0;i<n-1;i++){
            v[1][i]=v[0][i+1]-1;
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}