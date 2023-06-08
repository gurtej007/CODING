#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"1\n";
            continue;
        }
        int sum=n*(n+1)/2;
       
        if(sum%n==0){
            cout<<"-1\n";
            continue;
        } 
        vector<int> ans(n);
        ans[0]=n;
        int x=sum%n;  

        vector<int> rem(n);
        for(int i=0;i<n;i++){
            if(i!=0)
                rem[i]=i;
        }
        // for(int i=0;i<n;i++){
        //     cout<<rem[i]<<" ";
        // }
        
        int idx=1;
        int i=1,j=n-1;
        int s=n;
        while(i<j){
            int r=s%n;
            
            ans[idx++]=rem[j]-r;
            s+=(rem[j]-r);
            r=s%n;
            // cout<<r<<"\n";
            // cout<<rem[i]<<"\n";
            ans[idx++]=rem[i]-r+n;
            s+=(rem[i]-r+n);
            i++;
            j--;
        }
        if(i==j){
            if(rem[i]>s%n){
                ans[idx++]=rem[i]-s%n;
            }
            else{
                ans[idx++]=rem[i]-s%n+n;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}