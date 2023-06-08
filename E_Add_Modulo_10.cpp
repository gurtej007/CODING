#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 10 != 5 && v[i] % 10 != 0)
            while ((v[i] % 10) != 2)
            {
                v[i] = v[i] + v[i] % 10;
            }
        else
        {
            v[i] = v[i] + v[i] % 10;
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] % 10 == 0 && v[i + 1] % 10 == 0)
        {
            if (v[i] != v[i + 1])
            {
                cout << "No\n";
                return;
            }
        }
        if (v[i] % 10 != v[i + 1] % 10)
        {
            cout << "No\n";
            return;
        }
        if ((v[i + 1] / 10 - v[i] / 10) % 2 != 0)
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes"
     << "\n";
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