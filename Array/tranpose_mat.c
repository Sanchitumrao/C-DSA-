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
	printf("Transpose matrix:\n");
	for(i=0;i<cols;i++){
		for(j=0;j<rows;j++){
			printf("%d\t",mat[j][i]);
		}
		printf("\n");
	}
	return 0;
}
