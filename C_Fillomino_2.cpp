#include<bits/stdc++.h>
using namespace std;

int main(){
    
        int n;
        cin>>n;
        vector<vector<int>> ans(n,vector<int> (n));
        vector<int> v(n);
        
        for(int i = 0; i < n; i++){
            cin>>v[i];
      
        } 
        for(int i = 0; i < n; i++){
            for(int j = 0; j <=i; j++){
                if(i==j){
                    ans[i][j]=v[j];
                }
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==1){
                v[i]=0;
                break;
            }
        }
        int x=1;
        while(x<n){
            int j=0;
            int idx=0;
            for(int i=x;i<n;i++){
               if(v[idx]!=0){
                 ans[i][j]=v[idx++];
                 j++;
               }
               else{
                    while(v[idx]==0){
                        idx++;
                    }
                    ans[i][j]=v[idx++];
                    j++;
               }
            }
            for(int i=0;i<n;i++){
                if(v[i]==x+1){
                    v[i]=0;
                    break;
                }
            }
            x++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    
}