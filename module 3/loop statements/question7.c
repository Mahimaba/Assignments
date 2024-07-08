//7)WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746
#include<stdio.h>
main(){
	int n1,i=0;
	printf("enter the number:");
	scanf("%d",&n1);
	while(n1!=0){
		printf("%d",n1%10);//ans=last digit
		n1=n1/10;//ans=number-last digit
		i++;
	}
}
