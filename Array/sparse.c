#include<stdio.h>
int main(){
	int rows,cols;
	printf("Enter the rows and columns of matrix:\n");
	scanf("%d %d",&rows,&cols);
	int mat[rows][cols],count=0,i,j;
	printf("Enter elements of matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&mat[i][j]);
			if(mat[i][j]==0){
				count++;
			}
		}
	}
	if(count>(rows*cols)/2){
		printf("The matrix is a sparse matrix.");
	}
	else{
		printf("matrix is not a sparse matrix.");
	}
	return 0;
}
