#include<stdio.h>

#include<stdlib.h>
 
#define MAX 10
 
int top1=-1,top2=MAX-1,bottom=MAX,stack[MAX];
void push1();
void push2();
void pop1();
void pop2();
void display1();
void display2();
 
void main()
{
	int ch;
	
	while(1) 
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push1\n2.pop1\n3.display1\n4push2\n5.pop2\n6.display2\n7.exit");
		printf("\n\nEnter your choice(1-7):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push1();
					break;
			case 2: pop1();
					break;
			case 3: display1();
					break;
                	case 4:push2();
			  break;
		        case 5:pop2();
			  break ;
	        case 6:display2();
		  break;
		case 7:exit(0);
		default: printf("\nWrong Choice!!");
		}
	}
}
 
void push1()
{
	int val;
	
	if(top1==top2-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top1=top1+1;
		stack[top1]=val;
	}
}
 
void push2()
{
	int val;
	
	if(top1+1==top2)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top2=top2-1;
		stack[top2]=val;
	}
}
void pop1()
{
	if(top1==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top1]);
		top1=top1-1;
	}
}
 
void pop2()
{
	if(top2==MAX-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top2]);
		top2=top2+1;
	}
}
void display1(){

	int i;
	
	if(top1==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
    	for(int i=top1;i>=0;--i)
			printf("%d\n",stack[i]);
	}
} 

void display2()
{
	
	if(top2==MAX-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(int i=top2;i<MAX-1;i++)
			printf("%d\n",stack[i]);
	}

}




