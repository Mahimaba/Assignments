//24)Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
#include<string.h>
main(){
	char name[5][12];
	int salary[5],i,total=0;
	for(i=0;i<5;i++){
		printf("Enter the Employee %d :",i);
		scanf("%s",&name[i]);//name of employee
		printf("The %s Salary is :",name[i]);
		scanf("%d",&salary[i]);//salary of employee
		total+=salary[i];
		
	}
		for(i=0;i<5;i++){
		printf("Enter the Employee:%s\n",name[i]);//print the name of array
		
	}
	
	printf("\nTotal:%d",total);
	printf("\nAverage:%f",(float)total/5);
}
