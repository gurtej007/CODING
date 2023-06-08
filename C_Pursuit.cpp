#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int cnt=0;
        int i=n-1;
        int sum1=0;
        int sum2=0;
        while(cnt<n-n/4 && i>=0){
           
            sum1+=v1[i];
            sum2+=v2[i];
            cnt+=1;
            i-=1;
        }
        int idx1=i+1;
        int idx2=i;
        // cout<<sum1<<" "<<sum2<<"\n";
        if(sum1>=sum2){
            cout<<0<<"\n";
        }
        else{    
            int ans=n;
           
            while(sum1<sum2){
                sum1+=100;
                ans++;
                if(ans%4==0){
                    sum1-=v1[idx1];
                    idx1+=1;
                    // cout<<sum1;
                }
                else{
                    if(idx2>=0)
                        sum2+=v2[idx2];
                    idx2--;
                }
            }
            cout<<ans-n<<"\n";
        }

    }
}