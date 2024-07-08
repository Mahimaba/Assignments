//10)WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
main(){
	int n1;
	printf("Enter the value of n1:");
	scanf("%d",&n1);//input number
	
	//number is zero
	if(n1==0){
		printf("Digit is Zero");
	}
	
	//number greater than 0
	else if(n1>0){
		printf("Digit is Positive");
	}
	
	//number is less than 0
	else{
		printf("Digit is Negative");
	}
}
