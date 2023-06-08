#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,cx,cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        if((ay==by|| by==cy || ay==cy ) && (ax==bx || bx==cx || ax==cx)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        
    }
}