//8)Write a program to find out the max from given number (E.g., No: -1562Max number is 6)
#include<stdio.h>
main(){
	int n1,i,max_n=0,rem;
	printf("Enter the number:");
	scanf("%d",&n1);
	while(n1!=0){
		rem=n1%10;//last digit
		n1=n1/10;
		if(rem>max_n){
			max_n=rem;
		}
		else{
			max_n=max_n;
		}
	
		i++;
	}
		printf("max number is:%d",max_n);
	
}
