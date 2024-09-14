//32)Accept 2 numbers and find out its sum check it size
#include<stdio.h>
main(){
	float n1,n2,sum;
	printf("Enter the n1:");
	scanf("%f",&n1);
	printf("Enter the n1:");
	scanf("%f",&n2);
	sum=n1+n2;
	printf("It\'s sum is %.2f and it\'s size is %d",sum,sizeof(sum));//size =4
	
}
