//2)WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
main(){
	int option,n1,n2;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	
	printf("1-add 2-sub 3-multi 4-div:");
	scanf("%d",&option);//input value
	switch(option){
		case 1:
			printf("ADD:%d",n1+n2);
			break;
		case 2:
			printf("sub:%d",n1-n2);
			break;
		case 3:
			printf("multi:%d",n1*n2);
			break;
		case 4:
			printf("div:%f",(float)n1/n2);
			break;
		default:
			printf("Enter valid option");
	}
}
