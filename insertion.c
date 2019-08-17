#include<stdio.h>
void insertion(int arr[],int n){

int i;
    for(i=1;i<n;i++)
	{
		
		int hole=i;
		int element=arr[i];
		while(hole>0 & arr[hole-1]>element)
		{
		 arr[hole]=arr[hole-1];
		 hole=hole-1;
		}
		arr[hole]=element;
}

	printf("Sorted Array is: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");	
}

void main(){
	int arr[100],n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements to inputed: ");
	for(int i=0;i<n;++i){
		scanf("%d",&arr[i]);
	}
	insertion(arr,n);
}
