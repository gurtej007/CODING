#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int one=0;
        int ans=0;
        int y=0;
        int res=0;      
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                one++;
                y++;
            }
            else{
                if(y!=0){
                    one=y/2+1;
                }
            }
            res=max(res,one);
        }
        cout<<res<<"\n";
    }
}
