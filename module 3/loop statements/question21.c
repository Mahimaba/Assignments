//21)Accept 3 numbers from user using while loop and check each numbers palindrome#
#include<stdio.h>
main(){
	int n1,n2,n3;
	printf("enter the number 1:");
	scanf("%d",&n1);
	printf("enter the number 2:");
	scanf("%d",&n2);
	printf("enter the number 3:");
	scanf("%d",&n3);
	
	
	//check for first value
	int i=0,rem,rev=0;

	int num1=n1;
	while(n1!=0){
	rem=n1%10;
    rev=rev*10+rem;
	n1=n1/10;

	i++;

	}


	if(num1==rev){
		printf(" %d palindrome\n",num1);
	}
	else{
		printf("%d not palindrome\n",num1);
	}
	
	
	//check for second value	
	
	i=0,rev=0;
	int rem2;
	int num2=n2;
	while(n2!=0){
	rem2=n2%10;
	rev=rev*10+rem2;
	n2=n2/10;
	i++;
	
	}
	if(num2==rev){
		printf("%d palindrome\n",num2);
	}
	else{
		printf("%d not palindrome\n",num2);
	}

	//check for third value
	i=0,rev=0;
	int rem3;
	 int num3=n3;
	while(n3!=0){
	rem3=n3%10;
	rev=rev*10+rem3;
	n3=n3/10;
	i++;
//	printf("%d",rem3);	
	}
	if(num3==rev){
		printf("%d palindrome\n",num3);
	}
	else{
		printf("%d not palindrome\n",num3);
	}
	
	
	
}
