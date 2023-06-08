#include<stdio.h>
#include<stdlib.h>
struct Node{
    
    int data;
    struct Node* prev;
    struct Node* next;
};
void insertatidx(int idx, struct Node** head,int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    if(*head==NULL){
        *head=newnode;
        return;
    }
    struct Node* temp=*head;
    struct Node* pre=NULL;
    int cnt=1;
    while(cnt!=idx){
        pre=temp;
        temp=temp->next;
        cnt++;
    }
    if(pre==NULL){
        newnode->next=*head;
        newnode->prev=pre;
        *head=newnode;
        return ;
    }
    newnode->next=temp;
    newnode->prev=pre;
    pre->next=newnode;
    return ;

}
void deletion(struct Node**  head ,int idx){
    struct Node* temp=*head;
    struct Node* pre=NULL;
    int cnt=1;
    while(cnt!=idx){
        pre=temp;
        temp=temp->next;
        cnt++;
    }
    if(pre==NULL){
        *head=temp->next;
        temp->next=NULL;
        return ;
    }
    pre->next=temp->next;
    temp->next->prev=pre;
    temp->next=NULL;
    temp->prev=NULL;
    return ;
    
}
void display(struct Node**head){
    struct Node* temp=*head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
int main(){
    struct Node* head=NULL;
    int ch;
    while(0==0){
        printf("enter choice\n");
        scanf("%d",&ch);
        if(ch==1){
            int idx;
            scanf("%d",&idx);
            int num;
            scanf("%d",&num);
            insertatidx(idx,&head,num); 
        }

        if(ch==2){
            int idx ;
            scanf("%d",&idx);
            deletion(&head,idx);
        }
        if(ch==3)
            display(&head);

        if(ch==4){
            printf("invalid choice");
            break;
        }
    }
}

