#include <bits/stdc++.h>
using namespace std;

long long int solve(vector<int> &v)
{
    int cnt = 0;
    long long int ans=0;
    int i = v.size() - 1;
    while (i >= 0)
    {
        if (v[i] == 0)
        {
            cnt++;
            
        }
        if (v[i] == 1)
        {
            ans += cnt;
        }
        i--;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans=solve(v);
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
                ans = max(ans, solve(v));
                v[i] = 0;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
                ans = max(ans, solve(v));
                v[i] = 1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}