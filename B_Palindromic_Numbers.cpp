#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool ispalin(int &n){
    string str=to_string(n);
    int s=0,e=str.size()-1;
    while(s<e){
        if(str[s]!=str[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll x;
        cin>>x;
        ll n;
        cin>>n;
        ll dig=log10(n)+1;
        if(n<=pow(10,dig)-1 && n>=(pow(10,dig)-pow(10,dig-1))){
            ll x=2;
            cout<<dig;
            if(dig>1){
                x+=pow(10,dig-1);
                dig--;
            }
            cout<<x-n<<"\n";
        }
        else{
            ll x=pow(10,dig)-1;
            cout<<x-n<<"\n";
        }

    }
    
}