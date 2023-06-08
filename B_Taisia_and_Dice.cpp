#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        vector<int> v(n);
        v[0]=s-r;
        int i=1;
        int x=s-r;
        int z=n-1;
        while (i<n)
        {
            if((r-x)>=(z-1)){
                v[i]=x;
                r-=x;
                i++;
                z--;
            }
            else{
                x--;
            }
        }
        
        for(int j=0;j<n;j++){
            cout<<v[j]<<" ";
        }
        cout<<"\n";
    }
}