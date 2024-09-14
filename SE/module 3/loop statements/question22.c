//22)C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main(){
	int num,i,rem;
	printf("Enter the number:");
	scanf("%d",&num);
	
	//for reverse number logic
	for(i=0;num!=0;i++){
	rem=num%10;
	num=num/10;
	printf("%d",rem);
	}
}
