//28)Convert years into days and months
#include<stdio.h>
main(){
	float year;
	printf("Enter the year:");
	scanf("%f",&year);
	printf("Number of days:%.2f",year*365);//dayes=year*365
	printf("Number of Month:%.2f",year*12);//months=year*12
}
