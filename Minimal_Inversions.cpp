#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    vector<int> vis(n+1,0);
	    int res=0;
	    int ans=0;
	    for(int i=0;i<n;i++){
	       if(v[i]+1<=n && vis[v[i]+1]>0){
	           ans=ans+vis[v[i]+1];
	       }
	       else{
	           res=max(res,ans);
	           ans=0;
	       }
	       vis[v[i]]++;
	    }
	    res=max(res,ans);
	    cout<<res<<"\n";
	}
	return 0;
}
