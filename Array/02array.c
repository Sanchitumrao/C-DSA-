#include<stdio.h>
int main(){
	int n,i,j,max,min;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the array elements:");
	for (i;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Maximum element of array is:%d and minimum element of array is %d.",max,min);
	getch();
	return 0;
}
