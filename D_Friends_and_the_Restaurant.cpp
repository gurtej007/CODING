#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& v,int &ans){
    int i=0;
    int j=v.size()-1;
    int sum=0;
    while(i<j){
        int sum=v[i]+v[j];
        if(sum<0){
            i++;
        }
        else{
            ans+=1;
            i++;
            j--;
        }
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> x(n),y(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
            
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=y[i]-x[i];
           
        }
        sort(v.begin(),v.end());
        int ans=0;
        solve(v,ans);
        cout<<ans<<"\n";
    }
}