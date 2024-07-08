//5)WAP to print factorial of given number
#include<stdio.h>
main(){
	int n1,fact=1,i=1;
	printf("which factorial you want:");
	scanf("%d",&n1);
	while(i<=n1){
	fact*=i;//5*4*..*1
	 i++;
	}
	printf("factorial is:%d",fact);
	
	
}
