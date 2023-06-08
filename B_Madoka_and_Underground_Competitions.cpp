#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,r,c;
        cin>>n>>k>>r>>c;
        int req=(n*n)/k;
        r--;c--;
       
       
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                if((i+j)%k==(r+c)%k){
                    cout<<'X';
                }
                else{
                    cout<<'.';
                }
            }
            cout<<"\n";
        }

    }
}