#include<stdio.h>
void selection(int arr[],int n){
	int i,j,temp,min=arr[0],pos;
	for(i=0;i<n;i++){
		min=arr[i];
		pos=i;
		for(j=i;j<n;j++){
			if(min>arr[j]){
				pos=j;
			}
			}
			temp=arr[i];
			arr[i]=arr[pos];
			arr[pos]=temp;
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
	selection(arr,n);
}
