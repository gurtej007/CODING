#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        int sum = 0;
        int cnt2 = 0, cnt1 = 0;
        ll mini =1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            ll x=0;
            if(v[i]%2==0){
                while(v[i]%2==0){
                    v[i]/=2;
                    x++;

                }
            }
            else{
                while(v[i]%2!=0){
                    v[i]/=2;
                    x++;
                }
            }
            mini=min(mini,x);
        }
        if (sum % 2 == 0)
        {
            cout << 0 << "\n";
        }
        else
            cout << mini<< '\n';
    }
}
