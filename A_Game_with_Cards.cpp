#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        int maxi1=-1;
        for(int i=0;i<n;i++){
            cin>>v1[i];
            maxi1=max(maxi1,v1[i]);
        }
        int m;
        cin>>m;
        vector<int> v2(m);
        int maxi2=-1;
        for(int i=0;i<m;i++){
            cin>>v2[i];
            maxi2=max(maxi2,v2[i]);
        }
        if(maxi1>maxi2){
            cout<<"Alice"<<"\n"<<"Alice"<<"\n";
        }
        else if(maxi1<maxi2){
            cout<<"Bob"<<"\n"<<"Bob"<<"\n";
        }
        else{
            cout<<"Alice"<<"\n"<<"Bob"<<"\n";
        }
    }
}