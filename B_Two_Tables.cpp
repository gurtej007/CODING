#include<bits/stdc++.h>
using namespace std;
#define int long long
#define d double

signed main(){
    int t;
    cin>>t;
    while (t--)
    {
        d w,h,x1,y1,x2,y2,w1,h1;
        cin>>w>>h>>x1>>y1>>x2>>y2>>w1>>h1;
        d ans=0;
        if(x1>=w1 || y1>=h1 || w-x2>=w1 || h-y2>=h1){
            cout<<ans<<"\n";
        }
        else{
            if(w-x2<w1-x1 && h-y2<h1-y1){
                ans=-1;
            }
            else{
                ans=min(min(w1-x1,x2-(w-w1)),min(h1-y1,y2-(h-h1)));
            }
            cout<<ans<<"\n";
        }
    }
    
}