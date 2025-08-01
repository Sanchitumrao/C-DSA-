#include<stdio.h>
void showarray(int arr[]){
	int i;
    printf("Array elements: ");
    for (i=0;i<10;i++){
        printf("%d \t",arr[i]);
    }
}
int main(){
    int arr[10],i;
    printf("Enter the 10 elements of 1D array: ");
    for (i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    showarray(arr);
return 0;
}
