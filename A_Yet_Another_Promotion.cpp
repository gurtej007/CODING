#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        ll ans = 0;
        ll t;
        ll temp = n / (m + 1);
        ll v = n % (m + 1);
        if (n % (m + 1) == 0)
            t = temp * a * m;
        else
        {
            t = temp * a * m;
            t += (min(v* b, v * a));
        }
        ll z = min(n * a, n * b);
        cout << min(z, t) << endl;
    }
    
}