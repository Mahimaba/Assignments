//12)WAP to find maximum number among 3 numbers using ternary operator----*-

#include<stdio.h>
main(){
	int n1,n2,n3;//input number from user
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	printf("Enter n3:");
	scanf("%d",&n3);
	
	
	(n1>n2)?n1>n3?printf("n1 is greater"):printf("n2 is greater"):
	n2>n3?printf("n2 is greater"):printf("n3 is greater");
	
}
