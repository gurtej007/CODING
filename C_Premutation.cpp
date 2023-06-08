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

        vector<vector<int>> v(n, vector<int>(n - 1));
        
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < (n - 1); j++)
            {
                cin>>v[i][j];
            }
        }
        vector<int> arr(n, 0);
        
        vector<int> cnt(n + 1, 0);
        
        int z = 0;
     
        for (int i = 0; i < n - 1; i++)
        {

            int j = 0;

            while (j < n)
            {

                cnt[v[j][i]]++;

                if (cnt[v[j][i]] == (n - 1))
                {
                    arr[z++] = v[j][i];
                }

                j++;
            }
        }
        if(v[0][n-2]!=v[n-1][n-2] && v[0][n-2]==v[1][n-2]){
            swap(arr[n-1],arr[n-2]);
        }
        for (int i = 0; i < n; i++)
        {

            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
