//10) WAP to perform Palindrome number using for loop and function 

#include<stdio.h>
void palindrome(int num);


//define the function
void palindrome(int num){
	int num1=num;int rev=0;
	
	//reverser the number
	for(;num!=0;){
		int rem=num%10;
		rev=rev*10+rem;
	   
		num=num/10;
		
		
	}
	
	//check number palidrome or not
	if(rev==num1){
		printf("number is palindrome");
	}
	else{
		printf("not palindrome");
	}
}
main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);//input number
	palindrome(num);//calling
	
}
