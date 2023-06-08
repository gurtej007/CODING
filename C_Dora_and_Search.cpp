#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mini=1;
        int maxi=n;
        int i=0,j=n-1;
        bool f=0;
        while(abs(i-j)>=2){
            if((mini==v[i] &&  maxi==v[j]) || (mini==v[j] && maxi==v[i])){
                i++;
                j--;
                mini++;
                maxi--;
            }
            else if(v[i]==mini || v[i]==maxi){
                if(v[i]==maxi){
                    maxi--;
                }
                else{
                    mini++;
                }
                i++;
            }
            else if(v[j]==mini || v[j]==maxi){
                if(v[j]==maxi){
                    maxi--;
                }
                else{
                    mini++;
                }
                j--;
            }
            else{
                f=1;
                cout<<i+1<<" "<<j+1<<"\n";
                break;
            }
        }
        if(!f){
            cout<<"-1\n";
        }
    }
}