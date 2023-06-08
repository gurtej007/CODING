#include<bits/stdc++.h>
using namespace std;
int solve(int x){
    int ans=15;
    for(int i=0;i<=15;i++){
        int c=0;
        int y=x+i;
        while((y)%32768!=0){
            c++;
            y=y<<1;
        }
        ans=min(ans,i+c);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
   
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cout<<solve(x)<<" ";
    }
 
}