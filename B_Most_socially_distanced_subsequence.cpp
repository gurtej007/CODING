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
        vector<int> ans;
        ans.push_back(v[0]);
        for(int i=0;i<n-1;i++){
            if(v[i+1]>v[i]){
                while(i<n-1 && v[i+1]>v[i]){
                    i++;
                }
                ans.push_back(v[i]);
            }
            else{
                while(i<n-1 && v[i+1]<v[i]){
                    i++;
                }
                ans.push_back(v[i]);
            }
            i--;
        }
        cout<<ans.size()<<"\n";
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}