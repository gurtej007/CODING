#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int g=2;
        int b=1;
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]<h){
                h+=v[i]/2;
                ans++;
            }
            else{
                if(g>0 && h*2>v[i]){
                    h=h*2;
                    g--;
                    h+=v[i]/2;
                    ans++;
                }
                else if(b>0 && h*3>v[i]){
                    h=h*3;
                    b--;
                    h+=v[i]/2;
                    ans++;
                }
                else if(g==2 && h*4>v[i]){
                    h=h*4;
                    g=0;
                    h+=v[i]/2;
                    ans++;
                }
                else if(b>0 && g>0 && h*6>v[i]){
                    h=h*6;
                    g--;
                    b--;
                    h+=v[i]/2;
                    ans++;
                }
                else if(b==1 && g==2 && h*12>v[i]){
                    h=h*12;
                    g=0;
                    b=0;
                    h+=v[i]/2;
                    ans++;
                }
                else{
                    break;
                }
            }

        }
        cout<<ans<<"\n";
    }
}