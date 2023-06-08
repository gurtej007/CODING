#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int j=0;
        int ans=0;
        int x=n,y=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            int p=0;
            int neg=0;
            if(v[i]==0){
                continue;
            }
           
            else{
                int cnt=0;
                j=i;
                while(j<n && v[j]!=0){
                    if(abs(v[j])==2){
                        cnt++;
                    }
                    if(v[j]<0){
                        neg++;
                    }
                   
                    if(neg%2==0 && cnt>=maxi){
                        x=i;
                        y=n-j-1;
                        maxi=cnt;
                    }
                    j++;
                }

                i=j;
                int k=j-1;
                p=0,neg=0;
                cnt=0;
                while(k>=0 && v[k]!=0){
                    if(abs(v[k])==2){
                        cnt++;
                    }
                    if(v[k]<0){
                        neg++; 
                    }
                    if(neg%2==0 && cnt>=maxi){
                        x=k;
                        y=n-1-(j-1);
                        cnt=maxi;
                    }
                    k--;
                }
            }
        }
        cout<<x<<" "<<y<<"\n";
        
    }
}