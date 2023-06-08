#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==3){
            cout<<"2 0 1\n";
        }
        else if(n==2){
            cout<<"0 1\n";
        }
        else{
            int x=1;
            while(x*2<=(n-1)){
                x=x*2;
            }
            vector<int> v(n);
            int i=n-1;
            int y=n-1;
            while(y>=x){
                v[i]=y;
                i--;
                y--;
            }
            v[i]=0;
            for(int j=0;j<i;j++){
                v[j]=j+1;
            }
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
    }
}