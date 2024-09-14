//26)Convert temperature Fahrenheit to Celsius =(°F - 32) × 5/9 
#include<stdio.h>
main(){
	int temp;
	printf("Enter the Fahrenheit temperature:");
	scanf("%d",&temp);
    float C_temp=(temp-32)*(float)5/9;// formula to convert f to c
	printf("Celsius:%f",C_temp);
}

