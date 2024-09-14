/*32)Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
gross salary=basic salary+HRA+DA
*/
#include<stdio.h>
main(){
	int b_salary,HRA,DA;
	printf("Enter the basic salary:");
	scanf("%d",&b_salary);//BASIC salary
	if(b_salary<=10000){
		HRA=b_salary*20/100;//HRA value
		DA=b_salary*80/100;//DA value
		printf("Gross salary is : %d",b_salary+HRA+DA);//gross=basic+HRA+DA
	}
		else if(b_salary>10000 && b_salary<=20000){
		HRA=b_salary*25/100;
		DA=b_salary*90/100;
		printf("Gross salary is : %d",b_salary+HRA+DA);
	}
		else{
		HRA=b_salary*30/100;
		DA=b_salary*95/100;
		printf("Gross salary is : %d",b_salary+HRA+DA);
	}
}


