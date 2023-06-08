#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        
        if(r-l+1>=100){
            if(r%100==0){
                cout<<r-10<<"\n";
            }
            else {
                if(l%100>90){
                    l+=100;
                    cout<<l-l%100+9<<"\n";
                }
                else{
                    cout<<l+(90-l%100)<<"\n";
                }
            }
           
            continue;
        }
        int i=l;
        int ans=0,diff=0;
        while(i<=r){
            int x=i;
            int mini=9,maxi=0;
            while(x!=0){
                mini=min(mini,x%10);
                maxi=max(maxi,x%10);
                x/=10;
            }
            if(diff<=(maxi-mini)){
                ans=i;
                diff=maxi-mini;
            }
            i++;
        }
        cout<<ans<<"\n";
    }
}