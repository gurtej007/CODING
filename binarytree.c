#include<stdio.h>
#include<stdlib.h>
struct Node{ 
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* input(){
    struct Node* root=(struct Node*)malloc(sizeof(struct Node));
    int val;
    scanf("%d",&val);
    if(val==-1){
        return NULL;
    }
    root->data=val;
    root->left=input();
    root->right=input();
    return root;
}
void postorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void preorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
int main(){
    struct Node* root=(struct Node*)malloc(sizeof(struct Node));
    root=input();
    postorder(root);
    printf("\n");
    preorder(root);
}