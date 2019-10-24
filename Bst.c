#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*link,*left,*right;
	};
struct node *root=NULL, *parent, *ptr;
int flag;

void insert();
void preorder();
void inorder();
void postorder();
void search();
void delete();

void main(void){
	int ch;
	while(1){
		printf("\n1. Insert\n2. Preorder Traversal\n 3. Inorder Traversal\n 4. Postorder Traversal \n 5.Search\n 6.Delete\n 7.Exit\nEnter your choice");
	scanf("%d", &ch);
		switch(ch){
			case 1 : insert();
					 break;
			case 2 : preorder();
					 break;
			case 3 : inorder();
					 break;
			case 4 : postorder();
					 break;
			case 5 : search();
					 break;
			case 6 : delete();
					 break;
			case 7 : exit(0);
			
			default : printf("\tInvalid input\n");
		}
	}
}

void insert(){
	int x;
	struct* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&x);
	newnode->data=x;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL){
	root=newnode;
 	}
    else{
 		newnode=root;
 	 	flag=0;
 	while((ptr=!NULL)&&(flag=FALSE)){
		if(x<(ptr->data)){
	 	parent=ptr;
	 	ptr=ptr->left;
	 }
	else if(x>(ptr->data)){
		parent=ptr;
		ptr=ptr->right;
	}
	else
	{
		flag=1;
	}
   }
  }
  if(flag==1){
  	printf("Value exists");
  	exit(0);
  	}
  else{
	if(x>(parent->data)){
		parent->right=newnode;
	}
	else{
		parent->left=newnode;
	}
   }
  }
 
 void delete(){
	if(root==NULL){
		printf("Tree Empty");
		return;
	}
	ptr=root;
	flag=0;
	while((ptr=!NULL)&&(flag==0)){
		if(x< (ptr->data)){
			parent=ptr;
			ptr=ptr->left;
		}
		else if(x>(ptr->data)){
			parent=ptr;
			ptr=ptr->right;
		}
		else{
			flag=1;
		}
	}
	if(flag==0){
		printf("Value Not Found");
		exit(0);
		}
	else{
	if((ptr->left=NULL)&&(ptr->right==NULL))
		case=1;
	else if((ptr->left=!NULL)&&(ptr->right==NULL))
		case=3;
	else 
		case=2;
	if()
}
void search(int root){
int key;
ptr=root;
flag=0;
printf("Enter the element to searched: ");
scanf("%d",&key);
while((ptr=!NULL)&&(flag==0)){
	if(key<(ptr->data)){
 		ptr=ptr->left;
	}
    else if(key>(ptr->data)){
    	ptr=ptr->right;
    }
    else
    	flag=1;
    }
    if(flag==1){
		printf("Found");
	}
	else{
		printf("Not Found");
	}
}
	
