#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int Q[MAX],rear=-1,front=-1 ;

void enqueue();
void dequeue();
void display();

void main()
{
 int ch ;

  while(1)
      {
          printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
void enqueue()
{
   int val;
	
	if(front==(rear+1)%MAX)
	{
		printf("\nQueue is full!!");
	}
	else
	{   
          printf("\nEnter element to be enqueued:");
		scanf("%d",&val);    
            if(front==-1)
               {front=0;
               rear=0; } 
            else 
		rear=(rear+1)%MAX;
          Q[rear]=val;
	}
}

void dequeue()
{  
	
   if(front==-1)
      printf("\nQueue is empty\n");
   else 
      
      if(front==rear)
       { front=-1;
        rear=-1;
        }
        
      else
        front=(front+1)%MAX ;
      
}      

void display()
{
 int i;
 if(front==-1 && rear==-1)
  printf("Queue is empty.\n") ;
 else
  if(front<rear)
   { 
     for(i=front;i<=rear;i++)
         printf("%d \n",Q[i]);
   }
  else
   if(rear<front)
    {
      for(i=0;i<=rear;i++)
        printf("%d\n",Q[i]);
      for(i=front;i<=MAX-1;i++)
         printf("%d\n",Q[i]); 
    }  
}
