/*2)Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/
#include<stdio.h>
main(){
	int n1,n2;
	printf("Enter the number 1:");
	scanf("%d",&n1);
	printf("Enter the number 2:");
	scanf("%d",&n2);
	printf("Addition of %d and %d=%d\n",n1,n2,n1+n2);//addition
	printf("\n");//new line
	
	printf("subtraction of %d and %d=%d\n",n1,n2,n1-n2);//substraction
	printf("\n");//new line
		
	printf("multiplication of %d and %d=%d\n",n1,n2,n1*n2);//multiplication
	printf("\n");//new line
	
	printf("division of %d and %d=%.2f\n",n1,n2,(float)n1/n2);//division
	printf("\n");//new line
		
	printf("modulo of %.2f and %.2f =%.2f\n",(float)n1,(float)n2,(float)(n1%n2));//modulo
	printf("\n");//new line
	
	
}
