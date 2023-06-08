#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        long long x, y;
        cin>>x>>y;
        cout<< (x - y) + (x - 1 - y) + 1<<"\n";
        for (long long i = y + 1; i <= x; i++) cout<<i<<" ";
        for (long long i = x-1 ; i >= y; i--) cout<<i<<" ";
        cout<<"\n";

    }
}