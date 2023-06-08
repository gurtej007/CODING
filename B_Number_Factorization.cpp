#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>> n;
        ll c = n;
        ll mx = 1;
        map<ll, ll> mp;
        for (ll i = 2; i * i <= n; ++i)
        {
            if (c % i == 0)
            {
                int cnt = 0;
                while (c % i == 0)
                {
                    cnt += 1;
                    c /= i;
                }
                mp[i] = cnt;
                if (cnt > mx)
                {
                    mx = cnt;
                }
            }
        }
        if (c != 1)
            mp[c] = 1;
        ll res = 0;
        for(ll i=0;i<=mx;i++)
        {
            ll curr = 1;
            for (auto it : mp)
            {
                if (it.second > 0){
                    mp[it.first]--;
                    curr*=it.first;
                }
            }
            res += curr;
        }
        cout << res -1<< "\n";
    }
}
