#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        string h,m;
        string h1,m1;
        int i;
        int j;
        for(j=0;s1[j]!=' ';j++){
            h1+=s1[j];
        }
        j++;
        while(j<s1.size()){
            m1+=s1[j++];
        }
        for(i=0;s2[i]!=':';i++){
            h+=s2[i];
        }
        i++;
        while(i<s2.size()){
            m+=s2[i++];
        }

        while(true){
            if(m<m1){
                if()
            }
        }
    }
}