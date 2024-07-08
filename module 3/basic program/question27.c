//27)Convert days into months
#include<stdio.h>
main(){
	int day;
	printf("Enter the number of days:");
	scanf("%d",&day);
	printf("Number of month is:%.2f",(float)day/30);//number of months=days/30
}
