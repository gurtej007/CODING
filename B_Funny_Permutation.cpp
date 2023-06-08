#include<bits/stdc++.h>
using namespace std;

void shift(vector<int> & v,int n){
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        v1[(i+2)%n]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=v1[i];
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        if(n==1 || n==3){
            cout<<-1<<"\n";
        }
        else if(n==2){
            cout<<"2"<<" "<<"1"<<"\n";
        }
        else{
            for(int i=0;i<n;i++){
                v[i]=i+1;
            }
            shift(v,n);
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }

    }
}