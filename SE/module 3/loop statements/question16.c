//16)Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main(){
	int num,sum=0,i=1;
	printf("Enter the last digit :");
	scanf("%d",&num);//enter last digit
	while(i<=num){
		sum+=i;
		i++;
		
	}
	printf("Sum of Natural Numbers:%d",sum);
}

