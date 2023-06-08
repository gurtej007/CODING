#include <bits/stdc++.h>
using namespace std;

int main(){
    float l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;
    float ans;
    if(float(d/v)<=g){
        ans=(l/v);
    }
    else{
        float x=(d/v)-g;
        ans=(d/v)+r-x+(l-d)/v;
    }
    cout<<ans;
}