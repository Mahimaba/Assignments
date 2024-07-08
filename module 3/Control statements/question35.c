/*35)Accept the input month number and print number of days in that
month.*/
#include<stdio.h>
main(){
	int m_number;
	printf("Enter the Month number from 1 t0 12:");
	scanf("%d",&m_number);//user input
	if(m_number<0 || m_number>12){
		printf("Please enter valid number");//for not valid number
		
	}
	else if( m_number==4 ||m_number==6|| m_number==9||m_number==11){
		printf("30 days");//n=4,6,9,11 then 30 days
	}
	else if(m_number==2){
		printf("28/29 days");//feb
	}
	else{
		printf("31 days");
		
	}
}
