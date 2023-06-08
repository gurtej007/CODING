#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll maxi = -1;
    vector<pair<ll, ll>> v1(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
        v1[i]={v[i],i};
    }
    sort(v1.begin(),v1.end());
    vector<pair<ll, ll>> arr;
    if(v1[0].first%2!=0){
        arr.push_back({v1[0].second+1,1});
        v1[0].first+=1;
    }
   
    for(int i=1;i<n;i++){
        ll x=v1[i].first;
        ll y=v1[i-1].first;
        ll idx=v1[i].second;
        if(x%y!=0){
            arr.push_back({idx+1,y-x%y});
            v1[i].first=x+y-x%y;
        }
        
    }
    cout << arr.size() << endl;
    for(int i=0;i<arr.size();i++){
        if(arr[i].second!=-1)
            cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
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