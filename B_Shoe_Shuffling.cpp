#include <bits/stdc++.h>
using namespace std;

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
        if(n==1){
            cout<<"-1\n";
            continue;
        }
        bool f = 0;
        vector<int> ans(n);
        for (int i = 0; i < n ; i++)
        {
            int j = i + 1;
            while (j<n && v[j] == v[i])
            {
                j++;
            }
            if (j == i + 1)
            {
                f = 1;
                break;
            }
            for (int k = i + 1; k < j; k++)
            {
                ans[k] = k;
            }
            ans[i] = j;
            i=j-1;
        }
        if(f){
            cout<<"-1\n";
        }
        else{
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<"\n";
        }
    }
}