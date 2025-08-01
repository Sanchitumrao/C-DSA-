#include<stdio.h>
int main(){
	int rows1,cols1,rows2,cols2;
	printf("Enter the rows and columns of matrix 1:\n");
	scanf("%d %d",&rows1,&cols1);
	
	printf("Enter the rows and columns of matrix 2:\n");
	scanf("%d %d",&rows2,&cols2);
	
	int mat1[rows1][cols1],mat2[rows2][cols2],i,j,k,res[rows1][cols2],sum=0;
	printf("Enter elements of matrix 1:\n");
	for(i=0;i<rows1;i++){
		for(j=0;j<cols1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter elements of matrix 2:\n");
	for(i=0;i<rows2;i++){
		for(j=0;j<cols2;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Display matrix 1:\n");
	for(i=0;i<rows1;i++){
		for(j=0;j<cols1;j++){
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Display matrix 2:\n");
	for(i=0;i<rows2;i++){
		for(j=0;j<cols2;j++){
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	if(cols1!=rows2){
		printf("matrics multiplication is not possible");
	}
	else{
		for(i=0;i<rows1;i++){
		    for(j=0;j<cols2;j++){
			    for(k=0;k<rows2;k++){
			    	sum+=mat1[i][k]*mat2[k][j];
			    	res[i][j]=sum;
		       }
		    sum=0;
	     	}  
	    }
	    
	    printf("Matrics multiplication result:\n");
		for(i=0;i<rows1;i++){
		    for(j=0;j<cols2;j++){
			    printf("%d\t",res[i][j]);
	      	}
		    printf("\n");
	    }
	}
	
	return 0;
}
