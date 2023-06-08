#include<iostream>
using namespace std;

void solve(int *arr ,int d,int n){
    if(d==0){
        return ;
    }
    for(int i=1;i<n;i++){
        swap(arr[i-1],arr[i]);
    }
    solve(arr,d-1,n);
}
int  main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    d=d%n;
    solve(arr, d, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}   