#include<bits/stdc++.h>
using namespace std;
#define ll long long 
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
        sort(v.begin(),v.end());
        vector<int> arr(n);
        int i=0,j=n-1;
        int x=0;
        bool f=1;
        while(i<=j){
            if(i==j){
                arr[x]=v[i];
            }
            else{
                arr[x]=v[j];
                arr[x+1]=v[i];
            }
            if(arr[0]==arr[1]){
                f=0;
            }
            x+=2;
            i++;
            j--;
        } 
        if(!f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
}