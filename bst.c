#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *left,*right;
};


struct node* insert(struct node* node, int key)
{
	if(node==NULL){
		struct node *newnode = (struct node*) malloc(sizeof(struct node));
		newnode->left=NULL;
		newnode->right=NULL;
		newnode->key=key;
		
		return newnode;
	}
	if(key>node->key){
		node->right=insert(node->right,key);
	}
	else if(key<node->key){
		node->left=insert(node->left,key);
	}
	return node;
}
void inorder(struct node* root){
	if(root==NULL){
		return ;
	}
	inorder(root->left);
	printf("%d ",root->key);
	inorder(root->right);
}
struct node* findleft(struct node* root){
	
	if(root->left==NULL){
		return root;
	}
	return findleft(root->left);
}
struct node* del(struct node* root,struct node* prev,int x){
	if(root->key==x){
		if(!root->left && !root->right){
			return NULL;
		}
		else if(!root->left){
			return root->right;
		}
		else if(!root->right){
			return root->left;
		}
		else{
			struct node* y=root->left;
			findleft(root->right)->left=y;
			return root->right;
		}
		
	}
	if(x>root->key){
		root->right=del(root->right,root,x);
	}
	else{
		root->left=del(root->left,root,x);
	}
	return root;
}
void search(struct node* root,struct node* prev,int x){
	if(root==NULL){
		printf("Not present\n");
		return ;
		
	}
	if(root->key==x){
		printf("parent is :");
		printf("%d\n",prev->key);
		if(!root->left && !root->right){
			printf("No children\n");
		}
		else if(!root->left){
			printf("right child :");
			printf("%d\n",root->right->key);
		}
		else if(!root->right){
			printf("left child :");
			printf("%d\n",root->left->key);
		}
		else{
			printf("right child :");
			printf("%d ",root->right->key);
			printf("left child :");
			printf("%d\n",root->left->key);
		}
		return ;
	}
	if(x>root->key){
		search(root->right,root,x);
	}
	else{
		search(root->left,root,x);
	}
}
int main()
{
	
	struct node* root = NULL;
	root = insert(root, 50);
	insert(root, 45);
	insert(root, 47);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);
	struct node* prev=NULL;
	root=del(root,prev,50);
	search(root,prev,45);
	return 0;
}
