#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        int m1=-1,m2=-1;
        int id1,id2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=m1){
                m1=a[i];
                id1=i;
            }

        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]>=m2){
                m2=b[i];
                id2=i;
            }
        }
        if (id1==n-1 && id2==n-1){
            cout<<"Yes\n";
            continue;
        }
        int mx=max(a[n-1],b[n-1]);
        int mn=min(a[n-1],b[n-1]);
        bool f=1;
        for(int i=0;i<n-1;i++){
            if(max(a[i],b[i])>mx || min(a[i],b[i])>mn) {
                f=0;
                break;
            }
            
        }
        if(f){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";

        }
    }
}