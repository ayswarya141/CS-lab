#include<stdlib.h>
#include <stdio.h>

void bubblesort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
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
	bubblesort(arr,n);
}
