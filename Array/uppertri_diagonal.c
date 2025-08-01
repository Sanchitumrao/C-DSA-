#include<stdio.h>
int main(){
	int rows,cols;
	printf("Enter the rows and columns of matrix:\n");
	scanf("%d %d",&rows,&cols);
	int mat[rows][cols],i,j;
	printf("Enter elements of matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Display matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("Upper traingle:\n");
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(i<j){
			printf("%d\t",mat[i][j]);
		}
		else{
			printf("\t");
		}
		}
		printf("\n");
	}
	printf("Diagonal:\n");
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(i==j){
			printf("%d\t",mat[i][j]);
		}
		else{
			printf("\t");
		}
		}
		printf("\n");
	}
	
	
	return 0;
}
