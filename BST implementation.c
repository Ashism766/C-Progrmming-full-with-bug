//There is more bug than I thought :( 
#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct Node* data;
	struct node* next;
};
 struct node* hed=NULL;
void Enqueue(struct Node* x)
{
	struct node* temp=(struct node* )malloc(sizeof(struct node));
	temp->data=x;
	temp->next=hed;
	hed=temp;
}
void Dequeue(){
	struct node* temp=hed;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next->next);
	temp->next=NULL;
}

struct Node* Front(){
	struct node* temp=hed;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	return(temp->data);
}


struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* head=NULL;

struct Node* getNode(int x, struct Node* head){
	struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
	temp->data=x;
	temp->left=temp->right=NULL;
	return(temp);
}
struct Node* Bst(int x, struct Node* root){
		if(root==NULL){
			root=getNode(x,root);
			return(root);
		}
		if(x<=root->data)
		{
			root->left=Bst(x,root->left);
			return(root);
		}
		if(x>root->data)
		{
			root->right=Bst(x,root->right);
			return(root) ;
		}
}

void PrintBst(struct Node* temp){
	if(temp==NULL)return;
	printf(" %d \n",temp->data);
	PrintBst(temp->left);
	PrintBst(temp->right);
	while(Front!=NULL)Dequeue();
}

void PrintLevelDepthOrder(struct Node* temp){
	if(temp==NULL)return;
	Enqueue(temp->left);
	Enqueue(temp->right);
	printf(" %d \n",temp->data);
	PrintLevelDepthOrder(Front());
	Dequeue();
	PrintLevelDepthOrder(Front());
	
}
int main(){
	int n,i;
	scanf("%d",&n);
	int *x=(int *)malloc(n*sizeof(int ));
	
	head=Bst(8,head);head=Bst(7,head);head=Bst(5,head);head=Bst(9,head);head=Bst(12,head);head=Bst(10,head);
	
	//PrintBst(head);
	
	PrintLevelDepthOrder(head);
	
}

