//18)Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
main(){
	int number,i;
	printf("Multiplication Table for :");
	scanf("%d",&number);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",number,i,number*i);
	}
}
