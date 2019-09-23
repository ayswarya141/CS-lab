#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void enq();
void deq();
void disp();

void main(void){
	int ch;
	while(1){
		printf("\nMENU\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
	scanf("%d", &ch);
		switch(ch){
			case 1 : enq();
					 break;
			case 2 : deq();
					 break;
			case 3 : disp();
					 break;
			case 4 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}

void enq(){
	int x;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);
	if(front == NULL){
		newnode->data = x;
		newnode->link = NULL;
		front = newnode;
	}
	else{
		newnode->data = x;
		newnode->link = NULL;
		front->link = newnode;
		rear = newnode;
	}
	
}

void deq(){
	if(front == NULL)
		printf("\tEmpty\n");
	else{
		temp = front;
		printf("\nElement Dequeued %d", front->data);
		front = front->link;
		free(temp);
		
	}
	
}

void disp(){
	if(front == NULL){
		printf("\tEmpty\n");
		return;
	}
	temp = front;
	printf("\tElements ::");
	while(temp!= NULL){
		printf("\t%d\t", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

