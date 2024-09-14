//69)Write a C program to print a binomial coefficient table.
#include<stdio.h>
main(){
	int number;
	printf("Enter the number :");
	scanf("%d",&number);
	int start=1,i,j;
	for(i=0;i<number;i++){
		for(j=0;j<=i;j++){
			printf("%d",start);
			start=(start*(j-i))/i;
		}
	}
}
