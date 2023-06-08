#include <bits/stdc++.h>
using namespace std;
string solve(string &str){
    if(str.size()==0 || str.size()==1){
        return str;
    }
    
    if(str[0]=='p' && str[1]=='i'){
        string sub=str.substr(2);
        return str[1]+"3.14"+solve(sub);
    }
        
    else{
        string sub=str.substr(1);
        return str[0]+solve(sub);
    }
    
}
int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    string ans=solve(str);
	    cout<<ans<<"\n";
	}
	return 0;
}
