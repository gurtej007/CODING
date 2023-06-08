#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x1,y1,x2,y2;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        if(x1==x2 || y1==y2){
            cout<<"0\n";
        }
        else{
            int a,b;
            if(x1>x2){
                a=n-x1+n-x2;
            }
            else{
                a=x2-x1;
            }

            if(y1>y2){
                b=m-y1+m-y2;
            }
            else{
                b=y2-y1;
            }
            cout<<min(a,b)<<endl;
        }
    }
}