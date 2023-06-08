#include<bits/stdc++.h>
using namespace std;
void changearr(vector<int> &arr,int idx){
    int n=arr.size();

    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=arr[idx]
    return ;
}

void solve(vector<int> &arr,int fn,int r,int &ans){
    int h=arr.size();
    int l=0;
    int m=(l+h)/2;

    while(l<h){
        if(m<fn-1){
            r-=2;
            for(int i=0;i<m;i++){
                if(arr[i]>arr[i+1]){
                    changearr(arr,i+1);
                }
                else{
                    changearr(arr,i);
                }
            }
        }
        else if(m>fn-1){
            for(int i=0;i<fn-1;i++){
                if(i)
            }
        }
    }
    
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int q;
        cin>>q;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        while(q--){
            int fn;
            cin>>fn;
            
            int r;
            cin>>r;
            int ans=0;
            solve(arr,fn,r,ans);
            cout<<ans<<"\n";
        }
        
        
    }
}