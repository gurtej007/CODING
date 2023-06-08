#include<stdio.h>
int arr[5];
int front=-1;
int rear=-1;
void push(int val){
    if((rear+1)%5==front){
        printf("queue is full");
        printf("\n");
        return ;
    }
    else if(rear==4 && front!=0){
        rear=0;
        arr[rear]=val;
    }
    else if(front==-1){
        front=rear=0;
        arr[rear]=val;
    }
    else{
        rear++;
        arr[rear]=val;
    }
    printf("element added at position %d ",rear);
    printf("is %d",arr[rear]);
    printf("\n");
}
void pop(){
    
    if(front==-1){
        printf("queue is empty");
        printf("\n");
        return ;
    }
    int data=arr[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==4){
        front=0;
    }
    else{
        front++;
    }
    printf("element deleted %d",data);
    printf("\n");  
}

int main(){
    int choice;
    int d=-1;
    while(d==-1){
        printf("enter choice");
        scanf("%d",&choice);
        if(choice==1){
            int val;
            scanf("%d",&val);
            push(val);
        }
        else if(choice==2){
            pop();
            
        }
        else{
            break;
        }
    }
}