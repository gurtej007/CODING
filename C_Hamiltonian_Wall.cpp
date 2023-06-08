#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;
    cin>>m;
    int n=0;
    vector<vector<char>> v(2,vector<char>(m));
    while(n<2){
        string s;
        cin>>s;
        for(int i=0;i<m;i++){
            v[n][i]=s[i];
        }
        n++;
    }
    int ans=0;
    int idx=-1;
    string str="";
    for(int j=0;j<m;j++){
        string str1 ="";
        str1+=v[0][j];
        str1+=v[1][j];
        string str2="";
        str2+=v[1][j];
        str2+=v[0][j];
       
        if(idx!=-1 && str2==str){
            
            if((j-idx)%2==1){
                cout<<"NO\n";
                return ;
            }
            else{
                idx=j;
                reverse(str.begin(),str.end());
            }
        }
        else if(idx!=-1  && str1==str){
           
            if((j-idx)%2==0){
                cout<<"NO\n";
                return ;
            }
            else{
                idx=j;
            }
        }
        else if(idx==-1 && v[0][j]!=v[1][j]){
            
            idx=j;
           
            str+=(v[0][j]);
            str+=v[1][j];
            
        }

    }
    cout<<"YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}