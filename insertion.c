#include<stdio.h>
void insertion(int arr[],int n){
	int i,j,temp,pos;
	for(i=0;i<n;i++){
		
		for(j=i;j>0;--j){
			if(arr[j]<arr[j-1]){
			temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			}
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
	insertion(arr,n);
}
