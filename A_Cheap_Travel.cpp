#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    // cout<<floor(n/m)<<"\n";
    int y=floor(n/m)*b+(n%m)*a;
    int v;
    if(n%m!=0){
        v=n/m+1;
    }
    else{
        v=n/m;
    }
    v=v*b;
    int x=min({v,y,a*n});
    
    cout<<x<<"\n";
    
}