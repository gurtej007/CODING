#include<bits/stdc++.h>
using namespace std;

int recursive(int first,int second){
    cout<<second<<" ";
    if(first==1){
        return second; 
    }
    else{
        cout<<first+second<<endl;
        return recursive(first-2,first+second);
    }
}
int main(){
    recursive(11,12);
}