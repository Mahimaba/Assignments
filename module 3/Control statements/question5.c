//5). Check Number Is Positive or Negative
#include<stdio.h>
main(){
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	if(number==0){
		printf("Number is ZERO");//number is zero
	}
	else if(number>0){
		printf("Number is POSITVIE");//number is greater than 0
	}
	else if(number<0){
		printf("Number is NEGATIVE");// number is less than 0
	}
	
}
