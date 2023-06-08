#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(v[n-1]<v[n-2]){
        cout<<"-1\n";
        return ;
    }
    if(n==3){
        if(v[0]<v[1]){
            cout<<"0\n";
            return;
        }
        if((v[1]-v[2])<=v[1]){
            cout<<"1\n";
            cout<<"1 2 3\n";
            return ;
        }
    }
    bool f=0;
    for (int i = 0; i <=n-3; i++)
    {
        if(v[i]>v[i+1]){
            f=1;
            break;
        }   
    }
    if(f){
        if((v[n-2]-v[n-1])>v[n-2]){
            cout<<"-1\n";
            return ;
        }
        cout<<n-2<<"\n";
        for(int i=1;i<=n-2;i++){
            cout<<i<<" "<<n-1<<" "<<n<<"\n";
        }
    }
    else{
        cout<<"0\n";
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}