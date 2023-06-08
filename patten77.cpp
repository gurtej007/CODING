#include<iostream>
using namespace std;
void solve(int n,int col,int row){
    if(n==0){
        return ;
    }
    while(col<2*n-1){
        cout<<n<<" ";
        col++;
    }
    row++;
    while(row<2*n-1){
        cout<<n<<"\n";
        row++;
    }
    col--;
    while(col>=0){
        cout<<n<<" ";
        col--;
    }
    row--;
    while(row>=1){
        cout<<n<<"\n";
        row--;
    }
    solve(n-1,col+1,row);
    
}
int main(){
    int n;
    cin>>n;
    int col=0;
    int row=0;
    solve(n,col,row);
}