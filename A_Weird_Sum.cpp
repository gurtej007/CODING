#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second < b.second);
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    map<ll, vector<pair<ll, ll>>> mp;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            mp[x].push_back({i, j});
        }
    }
    ll ans = 0;
    for (auto i : mp)
    {
        vector<pair<ll, ll>> v1 = i.second;
        sort(v1.begin(), v1.end());
        ll sum = 0;
        for (int j = 0; j < v1.size(); j++)
        {
            sum += v1[j].first;
        }
        for (int j = 0; j < v1.size(); j++)
        {
            sum -= v1[j].first;
            ans += (sum - (v1[j].first * (v1.size() - j - 1)));
        }
        sum = 0;
        sort(v1.begin(), v1.end(),cmp);
        for (int j = 0; j < v1.size(); j++)
        {
            sum += v1[j].second;
        }
        for (int j = 0; j < v1.size(); j++)
        {
            sum -= v1[j].second;
            ans += (sum - (v1[j].second * (v1.size() - j - 1)));
        }
    }
    cout << ans << "\n";

}
int main()
{
    
    solve();
    
}