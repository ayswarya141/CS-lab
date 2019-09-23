#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* top = NULL;
struct node* temp;

void push();
void pop();
void disp();

void main(void){
	int ch;
	while(1){
		printf("\nMENU\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");
	scanf("%d", &ch);
		switch(ch){
			case 1 : push();
					 break;
			case 2 : pop();
					 break;
			case 3 : disp();
					 break;
			case 4 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}

void push(){
	int x;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);
	if(top == NULL){
		newnode->data = x;
		newnode->link = NULL;
		top = newnode;
	}
	else{
		newnode->data = x;
		newnode->link = top;
		top = newnode;
	}
	
}

void pop(){
	if(top == NULL)
		printf("\tEmpty\n");
	temp = top;
	printf("\tElement poped %d", top->data);
	top = top->link;
	free(temp);
	
}

void disp(){
	if(top == NULL){
		printf("\tEmpty\n");
		return;
	}
	temp = top;
	printf("Elements are: ");
	while(temp!= NULL){
		printf("\n%d", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

