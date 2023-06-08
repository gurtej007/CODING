#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> odd;
        vector<int> even;
        int cnt=0;
        int idx=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==1){
                odd.push_back(i+1);
            }
            if(v[i]%2==0){
                even.push_back(i+1);
            }
        }
        if(odd.size()==0){
            cout<<"NO\n";
        }
        else if(odd.size()==2 && even.size()==1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            if(odd.size()>=3){
                for(int i=0;i<3;i++){
                    cout<<odd[i]<<" ";
                }
                cout<<"\n";
            }
           
            else{
                cout<<odd[0]<<" ";
                for(int i=0;i<2;i++){
                    cout<<even[i]<<" ";
                }
                cout<<"\n";
            }
        }
    }
}