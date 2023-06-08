#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        vector<int> pos(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            pos[a[i]]=i;
        }
        int j=n-2;
        int ans=1;
        while(j>=0){
            if(pos[b[j]]<pos[b[j+1]]){
                ans++;
            }
            else{
                break;
            }
            j--;
        }
        cout<<n-ans<<"\n";
    }
}