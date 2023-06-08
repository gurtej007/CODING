#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string str = "2020";
    if (s[0] != '2' && s[n - 4] != '2')
    {
        cout << "NO\n";
        return;
    }
    int i = 0;
    while (i < 4)
    {
        if (s[i] == str[i])
        {
            i++;
        }
        else
        {
            break;
        }
    }
    int id=n-4+i;
    int idx=i;
    while(id<n && idx<4){
        if(s[id]==str[idx]){
            idx++;
            id++;
        }
        else{
            cout<<"NO\n";
            return ;
        }
    }
    cout<<"YES\n";
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