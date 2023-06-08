#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.size()>2){
            cout<<"NO\n";
        }
        else{
            if(s=="01" || s=="10" || s.size()==1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";

                
            }
        }
    }
    
}