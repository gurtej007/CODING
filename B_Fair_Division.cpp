#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int sum=0;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                cnt1++;
            }
            if(v[i]==2){
                cnt2++;
            }
            sum+=v[i];
        }
        if(sum%2!=0){
            cout<<"NO\n";
        }
        else{
            if(cnt1==0 && cnt2%2==1){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
}