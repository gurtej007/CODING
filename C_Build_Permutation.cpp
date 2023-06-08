#include <bits/stdc++.h>
using namespace std;
int square(int n){
    int x=sqrt(n);
    if(x*x==n){
        return n;
    }
    return (x+1)*(x+1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int x=n;
        int len=n;
        while(x>0){
            int idx=square(x-1)-(len-1);
            for (int i = idx; i < len; i++)
            {
                v[i] = x - 1;
                x = x - 1;
            }
            len=x;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}