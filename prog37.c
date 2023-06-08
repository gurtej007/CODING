#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    float avg=(sum)/n;

    printf("average=%f",avg);
    return 0;
}
