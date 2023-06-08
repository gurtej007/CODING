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
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        if(sum!=0 || v[0]<0){
            cout<<"No\n";
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(abs(v[i])==abs(v[i+1])){
                
            }
        }
    }
}