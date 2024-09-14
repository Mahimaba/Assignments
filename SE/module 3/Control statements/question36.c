/*36)Write a C program to input electricity unit charge and calculate the total electricity 
bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
main(){
	float unit,bill,subcharge;
	printf("Enter the bill unit:");
	scanf("%f",&unit);//unit from user
	if(unit<=50){
		bill=unit*0.50;//bill amount
	}
	else if(unit<=150){
		bill=25+(unit-50)*0.75;
			
	}
	else if(unit<=250){
		bill=100+(unit-150)*1.20;
	
	}
	else{
		bill=220+(unit-250)*1.50;
	}
//	subcharge calculate
	subcharge=(bill*20)/100;
	printf("%.2f\n",subcharge);
	printf("Total bill:%.2f",subcharge+bill);//total bill=subcharge+bill
	
}
