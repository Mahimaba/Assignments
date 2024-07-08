/*4)WAP to make simple calculator (operation include Addition, Subtraction,Multiplication,
 Division, modulo) using conditional statement*/
 #include<stdio.h>
 main(){
 	int option,n1,n2;
 	printf("Enter n1:");
 	scanf("%d",&n1);
 	printf("Enter n2:");
 	scanf("%d",&n2);
 	printf("Enter 1-add 2-sub 3-mul 4-divi 5-mod:");
 	scanf("%d",&option);
 	if(option==1){
 		printf("sum:%d",n1+n2);
 		
	 }
	else if(option==2){
 		printf("Subtraction:%d",n1-n2);
 		
	 }
	 else if(option==3){
 		printf("Multiplication:%d",n1*n2);
 		
	 }
	else if(option==4){
 		printf("Division:%.2f",(float)n1/n2);
 		
	 }
	else if(option==5){
 		printf("modulo:%d",n1%n2);
 		
	 }else{
	 	printf("Please entry the valid option");
	 }
 }
