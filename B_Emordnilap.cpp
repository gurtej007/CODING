#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
long long m = 1e9 + 7;

 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x=(n*(n-1));
        long long i=1;
        while(i!=(n+1)){
            x = ((x%m)*i)%m;
            i++;
        }
        cout<<x<<"\n";
    }
}