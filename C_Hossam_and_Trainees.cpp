#include<bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n,vector<int> &v1)
{
   
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
           
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers

    for (int p = 2; p <= n; p++){
        if (prime[p])
            v1.push_back(p);
    }
}
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    vector<int> v1;
    SieveOfEratosthenes(v[n-1],v1);
    int x=v1.size();
    bool flag=0;
    for(int i=0;i<x;i++){
        int cnt=0;
        bool f=0;
        for(int j=0;j<n;j++){
            if(v[j]%v1[i]==0){
                cnt++;
            }
            if(cnt>1){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"YES\n";
            return ;
        }
    }
    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}