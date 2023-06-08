#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=101;
    int y=128;
    while(__gcd(x,y)==1){
        x++;
        y++;
    }
    cout<<x<<" "<<y; 
}