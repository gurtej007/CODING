#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool f=0;
        
        vector<vector<int>> v(n);
        vector<int> c[n];
        set<pair<int,int>> s;
        for(int i=0;i<n;i++){
            vector<int> a(m);
            for(int j=0;j<m;j++){
                cin>>a[j];
            }
            v[i]=(a);
            vector<int> b=a;
            
            sort(b.begin(),b.end());
            int cnt=0;
           
            vector<pair<int,int>> res;
            for(int j=0;j<m;j++){
                if(b[j]!=a[j]){
                    res.push_back(j);
                    cnt++;
                }
            }
            s.insert(res);
            if(res.size()!=0){
                int z=i-1;
                while(z>=0){
                    if(v[z][res[0]]<v[z][res[1]]){
                        f=1;
                    }
                    else{
                        c[z]=res;
                    }
                    z--;
                }
            }
            
        }
        if(f){
            cout<<"-1\n";
        }
        else{
            if(c[0].size()!=0)
                cout<<c[0][0]+1<<" "<<c[0][1]+1<<"\n";
            else{
                cout<<"1 1"<<"\n";
            }
        }
    }
    
}