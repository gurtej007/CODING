#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        int y=h*60+m;
        
        int mini1=INT_MAX;
        int mini2=INT_MAX;
        while(n--){
            int h1,m1;
            cin>>h1;
            cin>>m1;
            int x=h1*60+m1;
            if(y>x){
                mini1=min(mini1,x);
            }
            else{
                mini2=min(mini2,x-y);
            }
        }
        if(mini2!=INT_MAX){
            cout<<(mini2)/60<<" "<<(mini2)%60<<"\n";
        }
        else{
            int z=1440-y;
            cout<<(mini1+z)/60<<" "<<(mini1+z)%60<<"\n";
        }
    }
}