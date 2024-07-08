//30)WAP to convert years into days and days into years
#include<stdio.h>
main(){
	float year,day;
	printf("Enter the year:");
	scanf("%f",&year);
	day=year*365;
	printf("Number of days:%.2f\n",day);
	printf("Number of year:%.1f",day/365);
}
