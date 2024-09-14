/*20)Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include<stdio.h>
main(){
	int Salary,ip,li;
	printf("enter the Salary:");
	scanf("%d",&Salary);//input salary
	
	
	ip=Salary*10/100;//insurance preminum
	
	
	li=Salary*10/100;//loan installment
	
	
	printf("remaining salary:%d",Salary-li-ip);//subtract from salary
}
