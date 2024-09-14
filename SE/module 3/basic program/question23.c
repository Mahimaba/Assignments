//23)WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
main(){
	int n1,n2;
	printf("enter the n1:");
	scanf("%d",&n1);
	printf("enter the n2:");
	scanf("%d",&n2);
	//using third variable
	n1=n1*n2;
	n2=n1/n2;
	n1=n1/n2;
	printf("After the swapping n1 : %d\n",n1);
	printf("After the swapping n2 : %d\n",n2);
}

