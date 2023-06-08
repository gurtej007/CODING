#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    int max1=INT_MIN,max2=INT_MIN,mini=INT_MAX;
    int idx1=-1,idx2=-1,idx3=-1;
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
        if(v[i].first>max1){
            max1=v[i].first;
            idx1=i;
        }
        if(v[i].second>max2){
            max1=v[i].second;
            idx2=i;
        }
        if(v[i].first<mini){
            mini=v[i].first;
            idx3=i;
        }
    }
    cout<<idx1<<" "<<idx2<<" "<<idx3;
    int x=float((max1+v[idx2].first-(max2-v[idx1].second))/2);
    float y=abs(max1-x)+v[idx1].second;
    if((abs(x-mini)+v[idx3].second)<=y){
        cout<<x<<"\n";
        return ;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}