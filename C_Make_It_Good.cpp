#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int pos=n-1;
        bool f=0;
        
            while(pos>0 && v[pos]<=v[pos-1]) pos--;
            while(pos>0 && v[pos]>=v[pos-1]) pos--;
        
        cout<<pos<<"\n";
    }
}