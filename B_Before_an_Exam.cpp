#include<bits/stdc++.h>
using namespace std;

int main(){
   
        int d,t;
        cin>>d>>t;
        vector<pair<int,int>> v(d);
        int sum=0;
        vector<int> ans;
        for(int i=0;i<d;i++){
            
            cin>>v[i].first>>v[i].second;
            ans.push_back(v[i].second);
            sum+=v[i].second;
        }
        
        if(sum<t){
            cout<<"NO\n";
            return 0;
        }
        int ex=sum-t;
        int i=0;
        while(i<d && ex>0){
            if(v[i].second-v[i].first>=ex){
                ans[i]=v[i].second-ex;
                ex-=v[i].second-ans[i];
                break;

            }
            else{
                ans[i]=v[i].first;
                ex-=(v[i].second-v[i].first);
                i++;
            }
        }
        if(ex==0){
            cout<<"YES\n";
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    
}