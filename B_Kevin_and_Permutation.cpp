#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        if(n<=3){
            for(int i=0;i<n;i++){
                cout<<i+1<<" ";
            }
            cout<<"\n";
            
        }
        else{
            v[0]=(n)/2;
            
            for(int i=1;i<n-1;i++){
                if(i%2==1){
                    v[i]=v[i-1]+n/2;
                }
                else{
                    v[i]=v[i-1]-(n/2+1);
                }
            }
            if(n%2!=0){
                v[n-1]=n;
            }
            else{
                v[n-1]=v[n-2]+n/2;
            }
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}