#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        int k=0;
        int j=0;
        for(j=0;j<(n-i-1);j++){
            cout<<"  ";
        }
        for(k=0;k<=i;k++){
            cout<<char('A'+k)<<" ";
        }
        for(int l=i-1;l>=0;l--){
            cout<<char('A'+l)<<" ";
        }
       
        cout<<"\n";
        
    }
    
}