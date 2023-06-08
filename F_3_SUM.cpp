#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        vector<int> c(10,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            c[v[i]%10]++;
        }
        bool f=0;
        for(int i=0;i<10;i++){
           
            if(c[i]>0){
               
                c[i]--;
                for(int j=i;j<10;j++){
                    if(c[j]>0){
                        c[j]--;
                        for(int k=j;k<10;k++){
                            if(c[k]>0 && (i+j+k)%10==3){
                                f=1;
                            }
                        }
                        c[j]++;
                    }
                    
                }
                c[i]++;
            
            }
            
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}