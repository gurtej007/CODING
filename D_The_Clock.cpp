#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x;
        cin>>x;
        int i=1,cnt=0;
        string str=s.substr(0,2);
        string min=s.substr(3,2);
        while(i<=24){
            
            int j=stoi(str);
            reverse(str.begin(),str.end());
            int k=stoi(str);
            int y=stoi(min);
            
            if(k<=59 && abs(k-y)%x==0){     
                cnt++;
            }
            if(x/60>1){
                if(((j+x/60)%24)>9)
                    str=to_string((j+x/60)%24);
                else
                    str='0'+to_string((j+x/60)%24);
                i+=x/60;
            }
            else{
                if(((j+1)%24)>9)
                    str=to_string((j+1)%24);
                else
                    str="0"+to_string((j+1)%24);
                i++;
            }
            if((y+(60/x)*x)%60>9){
                min=to_string((y+(60/x)*x)%60);
            }
            else{
                min="0"+to_string((y+(60/x)*x)%60);
            }
            
        }
        cout<<cnt<<"\n";
    }
}