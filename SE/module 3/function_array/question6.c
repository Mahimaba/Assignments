//6. WAP to make addition, Subtraction and multiplication of two matrix using  2-D Array
#include<stdio.h>
#include<string.h>
main(){
	int i,j;
	int a[2][3]={{23,4,2},{23,1,2}};
	int b[2][3]={{3,4,2},{2,4,2}};
	int c[2][3];
	printf("Addition of 2D matrix\n");
	//addition of 2d matrix
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);
			printf("\t");
		}
	printf("\n");	
	}
	
	
	printf("Subtraction of 2D matrix\n");
	printf("\n");
	
	
	// subtraction of 2d matrix
		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf("%d",c[i][j]);
			printf("\t");
		}
	printf("\n");	
	}
	
	printf("Mutiplication of 2D matrix\n");
	
	///multiplication of 2d matrix
		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]*b[i][j];
			printf("%d",c[i][j]);
			printf("\t");
		}
	printf("\n");	
	}
	
	
} 
