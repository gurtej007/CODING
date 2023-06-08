#include<bits\stdc++.h>
using namespace std;
void createmap(vector<int> &arr,map<int,int> &mp){
    for(int i=0;i<arr.size();i++){
        if(mp.count(arr[i])==0){
            mp[arr[i]]=i;
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int q;
        cin>>q;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int> mp;
        createmap(arr,mp);
        while(q--){
            int s;
            cin>>s;
            int e;
            cin>>e;
            if(!mp[s] || !mp[e]){
                cout<<"NO"<<"\n";
            }

            else{
                if(mp[e]<=mp[s]){
                    cout<<"NO"<<"\n";
                }
                else{
                    cout<<"YES"<<"\n";
                }
            }
            
        }
        
        
    }
}