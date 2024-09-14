//14)WAP to find the largest of three numbers.

#include<stdio.h>
main(){
	int n1,n2,n3;
	printf("Enter n1:");
	scanf("%d",n1);//n1 value
	printf("Enter n2:");
	scanf("%d",n2);//n2 value
	printf("Enter n3:");
	scanf("%d",n3);//n3 value
	if(n1>n2 && n1>n3){
		printf("N1 is greatest");//check for greatest number
	}
	else if(n2>n1 && n2>n3){
		printf("N2 is greatest");
	}
	else{
		printf("N3 is greatest");
	}
	
}
