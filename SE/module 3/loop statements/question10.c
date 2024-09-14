//10)Write a program you have to make a summation of first and last Digit. (E.g.1234 Ans: -5)
#include<stdio.h>
main(){
	
	
	int num,i=0,sum=0,rem,last_digit,first_digit;
	printf("enter the number:");
	scanf("%d",&num);
	last_digit=num%10;//find last digit
	
	
	do{
		rem=num%10;
		num=num/10;
		if(num==0){
			first_digit=rem;//find first digit
    	}
		i++;
	}while(num!=0);
	
	
	printf("Sum of last and first digit is:%d",first_digit+last_digit);
	
	

	
//	int n,i,sum;
//	printf("Enter size of array:");
//	scanf("%d",&n);//array size
//	int num[n];
//	int len=sizeof(num)/sizeof(num[0]);//length of array
//
//	for(i=0;i<len;i++){
//		printf("enter single  number:\n");
//		scanf("%d",&num[i]);//assin the array value
//	}
//	printf("Digit:");
//	for(i=0;i<len;i++){
//		
//		printf("%d",num[i]);//display digit
//	
//	}
//	sum=num[0]+num[len-1];
//	printf("\nsummation of first and last Digit:%d",sum);//sum of last and first digit
//	
}
