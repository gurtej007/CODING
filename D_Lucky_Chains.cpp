#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 10000000


ll spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    // for (int i = 0; i < ret.size();i++){
    //     cout << ret[i] << " ";
    // }
    return ret;
}
 
void solve(){
    sieve();
    ll a,b;
    cin>>a>>b;
    if(abs(a-b)==1){
        cout<<-1<<endl;
        return ;
    }
    if(__gcd(a,b)!=1){
        cout<<0<<"\n";
        return ;
    }
    if(__gcd(a,b)==1 && abs(a-b)%2==0){
        cout<<1<<"\n";
        return ;
    }
    ll x=abs(a-b);
    vector<int> fac=getFactorization(x);
    ll y=min(a,b);
    ll res=INT_MAX;
    for(auto it:fac){
        ll ans; 
        if(y%it==0 ){
            ans=y;   
        }
        else{
            ans=(y/it)*it+it;
        }
        
        res=min(res,ans-y);
    }
    
    cout<<res<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}