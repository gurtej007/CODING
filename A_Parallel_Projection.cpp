#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,d,h,a,b,f,g;
        cin>>w>>d>>h>>a>>b>>f>>g;
        int ans=0;
        cout<<min({g+h+b+abs(f-a),(d-g)+h+(d-b)+abs(f-a),f+h+a+abs(g-b),(w-a)+h+(w-f)+abs(g-b)})<<"\n";
    }
}