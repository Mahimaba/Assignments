//8)Write a program of structure employee that provides the following 
//a. information -print and display empno, empname, address 
//andage 
//b. Write a program of structure for five employee that 
//provides the following information -print and display 
//empno, empname, address andage 

#include<stdio.h>
#include<string.h>

//declare the struct
struct info{
	int empno;//data member
	char empname[10];
	char address[30];
};



main(){
	int i;
	struct info s[5];//array of struct
	
	
	//store th 5 employee details from user
	for(i=0;i<5;i++){
		printf("Enter the employee %d details\n",i+1);
	    printf("\n");
	    printf("enter  employee number is :");
	    scanf("%d",&s[i].empno);
	    getchar();//for hold for name
	    printf("Enter the name :");
	    gets(s[i].empname);
	    printf("Enter the adsress:");
	   gets(s[i].address);

	   
	}
	//print the struct details
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>print the details<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		for(i=0;i<5;i++){
		
	printf("%d\t%s\t\t%s\n",s[i].empno,s[i].empname,s[i].address);
	   
	}
}
