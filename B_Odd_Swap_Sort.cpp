#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<pair<int,int>> cnt(n);
        int c=0,e=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[i]={c,e};
            if(v[i]%2){
                c++;
            }
            else{
                e++;
            }
           
        }
        bool f=1;
        int maxo=INT_MIN,maxe=INT_MIN;
        if(v[0]%2==1){
            maxo=v[0];
        }
        else{
            maxe=v[0];
        }
        for (int i = 1; i < n ; i++)
        {
            if(v[i]%2){
                if(cnt[i].first>0 && maxo>v[i]){
                    cout<<"No\n";
                    f=0;
                    break;
                }
                else{
                    maxo=v[i];
                }
            }
            else{
                if(cnt[i].second>0 && maxe>v[i]){
                    cout<<"No\n";
                    f=0;
                    break;
                }
                else{
                    maxe=v[i];
                }
            }
        }
        if(f){
            cout<<"Yes\n";
        }
    }
}