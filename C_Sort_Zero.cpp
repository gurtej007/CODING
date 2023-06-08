#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    vector<int> mp(n + 1,0);
    

    int last = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] > v[i + 1])
        {
            last = i;
            break;
        }
    }
    if (last == -1)
    {
        cout << 0 << "\n";
        return;
    }
    int ans = 0;

    for (int i = 0; i <= last; i++)
    {
        mp[v[i]] = 1;
    }
    for (int i = last + 1; i < n; i++)
    {
        if (mp[v[i]]==1)
        {
            last = i;
        }
    }
    for (int i = last; i >= 0; i--)
    {
        mp[v[i]] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (mp[i]==1)
        {
            ans+=1;
        }
    }
    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}