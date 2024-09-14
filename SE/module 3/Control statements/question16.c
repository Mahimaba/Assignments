/*16)Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot8?*/

#include<stdio.h>
main(){
	int temp;
	printf("Enter the temperature in centigrade :");
	scanf("%d",&temp);
	if(temp<0){
		printf("Freezing weather");//less than 0 then freezing weather
	}
	else if(temp>=0 && temp<10){
		printf(" very Cold weather");// 1-10 then very cold
	}
	else if(temp>=10 && temp<20)
	{
			printf("Cold weather");//10-20 then cold 
	}
	else if(temp>=20 && temp<30){
		printf(" Normal in Temp");//20-30 normal weather
	}
	else if(temp>=30 && temp<40){
		printf(" Its Hot");//30-40 then it's hot
	}
	else{
			printf(" Its Very Hot");//very hot above 40 temp
	}


	}
