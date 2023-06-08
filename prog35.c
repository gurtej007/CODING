#include<stdio.h>

int main(){
    int arr[8]={1,8,6,4,3,5,2,7};
    int key;
    scanf("%d",&key);
    int flag=0;
    for(int i=0;i<8;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("key is present");
    }
    else{
        printf("key is not present");
    }

}