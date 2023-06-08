#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> x(n),y(n);
        int i=0,j=0;
        int k=0;
        while(k<2*n){
            int a,b;
            cin>>a>>b;
            if(a==0){
                y[i++]=abs(b);
            }
            else{
                x[j++]=abs(a);
            }
            k++;
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        double ans=0;
        for(int i=0;i<n;i++){
            double z=x[i]*x[i]*1.0+y[i]*y[i]*1.0; 
            ans+=(sqrt(z));
        }
        cout<<fixed<<setprecision(15)<<ans<<"\n";
    }
}