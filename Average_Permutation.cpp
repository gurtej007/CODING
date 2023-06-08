#include <iostream>
using namespace std;

int main() {
	int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        int i=n;
        for(i=n;i>0;i-=2){
            cout<<i<<" ";
        }
        if(i==-1){
            i=2;
        }
        else{
            i=1;
        }
        for(i;i<=n-1;i+=2){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}