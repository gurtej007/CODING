#include<bits/stdc++.h>
using namespace std;
bool possible(long long int m,int b1,int s1,int c1,int bp,int sp,int cp,long long int r,int b,int s,int c){
    long long z=0;
    long long b_=max(b1*m-b,z);
    long long s_=max(s1*m-s,z);
    long long c_=max(c1*m-c,z);
    long long total=(b_)*bp+(c_)*cp+(s_)*sp;
    if(r>=total){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string str;
    cin>>str;
    int b,s,c;
    cin>>b>>s>>c;
    long long int bp,sp,cp,r;
    cin>>bp>>sp>>cp>>r;
    int b1=0,s1=0,c1=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='B'){
            b1++;
        }
        if(str[i]=='S'){
            s1++;
        }
        if(str[i]=='C'){
            c1++;
        }
    }
    long long l=0,rt=r+200;
    long long m=l+(rt-l)/2;
    while(l<=rt){
        if(possible(m,b1,s1,c1,bp,sp,cp,r,b,s,c)==1){
            l=m+1;
        }
        else{
            rt=m-1;
        }
        m=l+(rt-l)/2;
    }
    cout<<rt<<"\n";
}