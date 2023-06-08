#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ans=0;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> mat(n / k);
    for (int i = 0; i < n / k; i++)
    {
        for (int j=i*k; j<i*k+k; j++)
        {
            mat[i].push_back(v[j]);
        }
    }
    for (int j = 0; j < mat[0].size(); j++)
    {
        int cnt1=0;
        int cnt2=0;
        for (int i = 0; i < mat.size(); i++)
        {
            
            if(mat[i][j]==1){
                cnt1++;
            }   
            else if(mat[i][j]==2){
                cnt2++;
            }
        }
       
        ans+=min(cnt1,cnt2);
    }
    cout<<ans<<"\n";
}
int main()
{
    solve();
}