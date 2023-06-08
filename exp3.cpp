#include <iostream>
using namespace std;
void swap1(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap2(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=5-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" 
            ";
        }
        cout<<"\n";
    }
}
