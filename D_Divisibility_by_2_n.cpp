#include<bits/stdc++.h>
using namespace std;
void check(vector<int> & arr,int n){
    for(int i=0;i<n;i++){
        int j=i+1;
        int c=0;
        while(j%2==0){
            j/=2;
            c++;
        }
        arr[i]=c;
    }
}
int solve(vector<int> v,int n){
    int req=n;
    int cnt=0;
    for(int i=0;i<n;i++){
        while(v[i]%2==0){
            v[i]/=2;
            cnt++;
        }
    }
    int ans=0;
    if(cnt>=req){
        return 0;
    }
    else{
        vector<int> arr(n);
        check(arr,n);
        sort(arr.begin(),arr.end(),greater<int>());
        int i=0;
        while((req-cnt)>0 && i<n){
            ans++;
            cnt+=arr[i++];
            // cout<<cnt<<"\n";
        }
        if((req-cnt)>0){
            return -1;
        }
        else{
            return ans;
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        cout<<solve(v,n)<<"\n";
        
        
    }
}