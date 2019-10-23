#include<stdio.h>
#define SIZE 5
int a[SIZE],front=-1,rear=-1;
void enqueue(int data){
  if (front==(rear+1)%SIZE)
    printf("Queue is Full");
  else if (front==-1){
    front++;rear++;
    a[rear]=data;
  }
  else{
    if (rear==SIZE-1)
      rear=0;
    else
      rear++;
    a[rear]=data;
  }
  printf("\n");
}
void dequeue(){
  if (front==-1)
    printf("Empty Queue");
  else{
    printf("%d is deleted",a[front]);
    if (front==rear)
      front=rear=-1;
    else if(front==SIZE-1)
      front=0;
    else
      front++;
  }
  printf("\n");
}
void display(){
  if (front==-1)
    printf("Empty Queue");
  else if(front<=rear){
    for (int i=front;i<=rear;i++)
      printf("%d ",a[i]);
  }
  else{
    for (int i=front;i<SIZE;i++)
      printf("%d ",a[i]);
    for (int i=0;i<=rear;i++)
      printf("%d ",a[i]);
  }
  printf("\n");
}
int main(){
  int x=1,data;
  printf("Enter Option\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\n");
  while(x){
    scanf("%d",&x);
    if (x==1){
      printf("Enter Data: ");
      scanf("%d",&data);
      enqueue(data);
    }
    else if(x==2){
      dequeue();
    }
    else if(x==3){
      display();
    }
    printf("\n");
  }
  return 0;
}
