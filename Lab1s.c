#include<stdlib.h>
#include <stdio.h>
void linear(int arr[],int n,int key){
	int i,flag=0;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("%d is present at location:%d\n",key,i+1);
	}
	else{
		printf("%d is not present\n",key);
	}
}
void sortfun(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	printf("SORTED ARRAY IS:\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
void binary1(int arr[],int n,int key){
	int lower,upper,mid,flag=0;
	lower=0;
	upper=n-1;
	while(lower<=upper){
		mid=(upper+lower)/2;
		if(arr[mid]==key){
			flag=1;
			break;
		}
		else if(arr[mid]>key){
			upper=mid-1;
		}
		else{
			lower=mid+1;
		}
	}
	if (flag==0){
		printf("%d not found\n",key);
	}
	else{
		printf("%d found at position %d\n",key,mid+1);
	}
}
void binary2(int arr[],int key,int lower,int upper){
	static int mid,flag;
	if(lower>upper){
		flag=1;
		return;
	}
	mid=(lower+upper)/2;
	if(arr[mid]>key){
		binary2(arr,key,lower,mid-1);
	}
	else if(arr[mid]==key){
		printf("%d is found at position %d\n",key,mid+1);
		return;
	}
	else{
		binary2(arr,key,mid+1,upper);
	}
	
}
void main(){
	int i,ch,n,key;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:\n");
	scanf("%d",&key);
	sortfun(arr,n);
	printf("\n\t\tMENU\n");
	printf("1.LINEAR SEARCH\n 2.BINARYSEARCH\n 3.BINARY(REC)\n 4.EXIT\n");
	printf("\nEnter your Choice(1-4)");
	scanf("%d",&ch);
	switch(ch){
	case 1: linear(arr,n,key);
		printf("LINEAR SEARCH:\n"); 
		break;

	case 2: binary1(arr,n,key);
		printf("BINARY SEARCH:\n");
		break;

	case 3: binary2(arr,key,0,n-1);
		printf("BINARY SEARCH(RECURSIVE):\n");
		break;

	case 4: exit(0);
		break;

	default:printf("Invalid Choice");
}
}
