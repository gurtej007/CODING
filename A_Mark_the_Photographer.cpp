#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int s=n-1;
        int e=2*n-1;
        bool flag=1;
        while(s>=0){
            if(abs(arr[e]-arr[s])>=x){
                e--;
                s--;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}
