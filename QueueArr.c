#include<stdio.h>
#include<stdlib.h>
#define Max 5

void enq();
void deq();
void disp();

int front=-1, rear=-1, q[Max];

void main(void){
	int ch;
	while(1){
		printf("\n1. Enqueue\n2. Dequeue\n 3. Display\n 4. Exit \n\nEnter your choice");
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
	if(rear == Max-1){
		printf("\tQueue is full");
		return;
	}
	if(front==-1 && rear ==-1)
		front = rear = 0;
	else 
		rear++;
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);	
	q[rear] = x;
}

void deq(){
	if(rear == -1){
		printf("\tQueue is empty");
		return;
	}
	if(front == rear)
		front = rear = -1;
	else 
		front++;
}

void disp(){
	if(rear == -1){
		printf("\tQueue is empty");
		return;
	}
	printf("\tQueue is ::  ");
	for(int i=front; i<=rear; ++i)
		printf("%d  ", q[i]);
	printf("\n");
}
