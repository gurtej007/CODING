#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        int cnt=1;
        if(m%2==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<cnt++<<" ";
                }
                cout<<"\n";
            }
        }
        else if(n%2==0){
            int x=1;
            for(int i=0;i<n;i++){
                cnt=x;
                for(int j=0;j<m;j++){
                    cout<<cnt<<" ";
                    cnt+=n;
                }
                x++;
                cout<<"\n";
            }

        }
        else{
            if(m>=n){
                int idx=m;

                for(int i=0;i<n;i++){

                    int x=cnt;
                    cnt=cnt+(m-idx);
                    for(int j=0;j<idx;j++){
                        cout<<cnt++<<" ";
                    }
                    for(int j=idx;j<m;j++){
                        cout<<x++<<" ";
                    }
                    cout<<"\n";
                    idx--;
                }
            }
            else{
                vector<vector<int>> v(n,vector<int>(m));
                int idx=n;
                for(int i=0;i<m;i++){
                    for(int j=idx;j<n;j++){
                        v[j][i]=cnt++;
                    }
                    for(int j=0;j<idx;j++){
                        v[j][i]=cnt++;
                    }
                    idx--;
                }
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        cout<<v[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                
            }
        }
        
        cout<<"\n";
    }
}