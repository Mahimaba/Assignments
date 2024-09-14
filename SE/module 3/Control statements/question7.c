//7)Accept marks from user and check pass or fail
#include<stdio.h>
main(){
	int marks;
	printf("Enter the marks(Between 1 to 100):");
	scanf("%d",&marks);
	if(marks<0){
		printf("Enter valid marks");// try again
	}
	else if(marks>33){
		printf("You are PASS :)");//pass if marks grater then 33
	}
	else {
		printf("You are FAIL :(");//fail if marks is less than 33
	}
}
