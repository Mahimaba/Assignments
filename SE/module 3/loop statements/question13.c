//13)calculate the Factorial of a Given Number using while loop
#include<stdio.h>
main(){
	int num,fact=1,i=1;
	printf("which number you want find factorial:");
	scanf("%d",&num);
	while(i<=num){
		fact*=i;//5*4*3*2*1;
		i++;
	}
	printf("Factorial is:%d",fact);
}

