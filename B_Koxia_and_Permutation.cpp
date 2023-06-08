#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int x=0;
        for(int i=1;i<=n;i+=2){
            cout<<n-x<<" ";
            if(i+1<=n){
                cout<<x+1<<" ";
            }
            x++;
        }
        cout<<"\n";
    }
    
}