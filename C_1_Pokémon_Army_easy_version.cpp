#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& v,int idx,bool f){
    if(idx>=v.size()){
        return 0;
    }
    int t;
    if(f){
        t=v[idx]-solve(v,idx+1,!f);
        cout<<t<<" "<<idx<<"\n";
    }
    else{
        t=-v[idx]+solve(v,idx+1,!f);
         cout<<t<<" "<<idx<<"\n";
    }
    int nt=solve(v,idx+1,f);
    return max(t,nt);
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];         
        }
        int idx=0;
        bool f=1;
        cout<<solve(v,idx,f)<<'\n';
    }
}