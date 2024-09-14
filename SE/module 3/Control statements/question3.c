//3)WAP to check if the given year is a leap year or not.
#include<stdio.h>
main(){
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||(year%400==0)){
		printf("%d is leap year",year);//year is divide by 4 and not divide by 100
		
	}
	else{
		printf("%d is not a leap year",year);
	}
}
