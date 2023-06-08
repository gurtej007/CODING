#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long inv[1000001];

signed main() {
  inv[0]=inv[1]=1;
  for(long long i=2; i<=1000000; ++i)
    inv[i]=998244353-998244353/i*inv[998244353%i]%998244353;
  int t;
  cin >> t;
  while(t--) {
    ll n;
    string a ,b;
    cin >> n >> a >> b;
    ll s=0;
    ll x=1,y=1;
    for(ll i=0; i<n; ++i) s+=a[i]!=b[i];
    for(ll i=n; i>=2; --i) {
      x=((n*inv[i]%998244353+(n*inv[i]%998244353-1)*x%998244353)%998244353+998244353)%998244353;
      y=(y+(i<=s)*x)%998244353;
    }
    if(s==0) cout << 0 << endl;
    else cout << ((x*n+n+y-x)%998244353+998244353)%998244353-1 << endl;
  }
}
