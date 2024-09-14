//37)WAP to show
//i. Monday to Sunday using switch case
#include<stdio.h>
main(){
	int number;
	printf("Enter the number from 1 to 7:");
	scanf("%d",&number);//user input for days
	switch(number){
		case 1:
			printf("Monday");//1-mon
			break;
		case 2:
			printf("Tuesday");//2-tuesday
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");//7-sunday
			break;
		default:
			printf("Please enter the valid day number");//not valid input
	}
}
