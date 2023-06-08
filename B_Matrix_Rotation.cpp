#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q=0;
    vector<vector<int>> v(2,vector<int>(2));
    int mini=101,maxi=-1;
    int x1=0,x2=0;
    int y1=0,y2=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>v[i][j];
            if(mini>v[i][j]){
                mini=v[i][j];
                x1=i;
                y1=j;
            }
            if(maxi<v[i][j]){
                maxi=v[i][j];
                x2=i;
                y2=j;
            }
        }
    }
    if(abs(x2-x1)+abs(y2-y1)==2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}