#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        long long int i=0,cnt=1,j=1;
        long long int ans=0;

        while(i<n){
            while(j<n && v[j]>=(cnt+1)){
                cnt++;
                j++;
            }
            ans+=(j-i);
            i++;
            cnt--;
        }
        cout<<ans<<"\n";
    }
}