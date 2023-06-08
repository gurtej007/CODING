#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<string, ll> mp;
        bool flag = 0;
        
        for (ll i = 0; i < n - 1; i++)
        {
            string str="";
            str += s[i];
            str += s[i + 1];
            if (mp.find(str) != mp.end() && i - mp[str] >= 2)
            {
                flag = 1;
                break;
            }
            else
            {
                if(mp.find(str) == mp.end()){
                    mp[str] = i;
                    
                }
                
            }
        }

        if (flag)
        {
            cout << "YES\n";
            
        }
        else
            cout << "NO\n";
    }
}