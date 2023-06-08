#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n),odd,even;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==1){
                odd.push_back(v[i]);
            }
            else{
                even.push_back(v[i]);
            }
        }

        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end(),greater<int>());
        if(even.size()==0){
            if(odd.size()==1){
                cout<<"Tie\n";
            }
            else{
                cout<<"Bob\n";
            }
        }
        else if(odd.size()==0){
            cout<<"Alice\n";
        }
        else{
            ll i=0,j=0;
            ll a=0,b=0;
            bool f=1;
            int n1=odd.size(),n2=even.size();
            while(i<odd.size() || j<even.size()){
                if(f){
                    if(i<n1){
                        if(j<n2){
                            if(odd[i]>even[j]){
                                i++;
                            }
                            else{
                                a+=even[j];
                                j++;
                            }
                        }
                        else{
                            i++;
                        }
                    }
                    else
                        a+=even[j++];
                }
                else{
                    if(j<n2){
                        if(i<n1){
                            if(odd[i]>even[j]){
                                b+=odd[i];
                                i++;
                            }
                            else{
                                j++;
                            }
                        }
                        else{
                            j++;
                        }
                    }
                    else{
                        b+=odd[i++];
                    }
                }
                f=!f;
            }
            
            if(a>b){
                cout<<"Alice\n";
            }
            else if(a<b){
                cout<<"Bob\n";
            }
            else{
                cout<<"Tie\n";
            }
        }
    }
}