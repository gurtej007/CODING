#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;
        if(ax==bx && bx==fx){
            if((ay<fy && fy<by) || (by<fy && fy<ay)){
                cout<<abs(ay-by)+2<<"\n";
            }
            else{
                cout<<abs(ay-by)<<"\n";
            }
        }
        else if(ay==by && by==fy){
            if((ax<fx && fx<bx) || (bx<fx && fx<ax)){
                cout<<abs(ax-bx)+2<<"\n";
            }
            else{
                cout<<abs(ax-bx)<<"\n";
            }
        }
        else{
            cout<<abs(ax-bx)+abs(ay-by)<<"\n";
        }
    }
}