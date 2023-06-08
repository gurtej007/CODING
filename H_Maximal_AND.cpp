#include<bits/stdc++.h>
using namespace std;
int exponentMod(int A, int B)
{
    // Base cases
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;
 
    // If B is even
    int y;
    if (B % 2 == 0) {
        y = exponentMod(A, B / 2);
        y = (y * y) ;
    }
 
    // If B is odd
    else {
        y = (y * exponentMod(A, B - 1));
    }
 
    return y;
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    vector<int> arr(31,0);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
       
        for(int j=30;j>=0;j--){
            if(v[i] & 1<<j){
                arr[j]++;
            }
        }
    }
    int ans=v[0];
    for(int i=1;i<n;i++){
        ans=ans&v[i];
    }
    for(int j=30;j>=0;j-- ){
        if(arr[j]==n){
            continue;
        }
        if(n-arr[j]<=k){
            ans+=pow(2,j);
            k-=(n-arr[j]);
        }
    }
    cout<<ans<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}