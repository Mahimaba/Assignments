/*30)If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-*/
#include<stdio.h>
main(){
	float bill,subcharge;
	printf("Enter the bill amount (minimum=256):");
	scanf("%f",&bill);//input bill
	
	
	
	if(bill>800){
		subcharge=bill*18/100;
		
		printf("Total amount:%f",bill+subcharge);//subcharge add
	}
	else if(bill>256 && bill<=800){
		printf("Total amount:%f",bill);//subcharge not add
	}else{
		printf("Enter the valid bill amount");
	}
	
}

