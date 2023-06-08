#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        if(n==sum){
            cout<<"0\n";
        }
        else if(n+1-sum>=0){
            cout<<"1\n";
        }
        else{
            cout<<sum-n<<"\n";
        }
    }
}