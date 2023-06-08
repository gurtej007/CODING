#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int minage=v[n-1];
    v[n-1]=-1;
    int x=n-1;
    for(int i=n-2;i>=0;i--){
        if(minage<v[i]){
            v[i]=x-i-1;
        }
        else{
            minage=v[i];
            v[i]=-1;
            x=i;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}