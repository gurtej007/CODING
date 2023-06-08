# include <stdio.h>

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int res[7];
    int l=1;

    for(int i=0;i<7;i++){
        res[(i+7-l)%7]=arr[i];
    }
    for(int i=0;i<7;i++){
        printf("%d ",res[i]);
    }

    return 0;   
}