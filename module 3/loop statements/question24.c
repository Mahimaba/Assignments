//24)1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main(){
	int i,num,sum=0;
	printf("Enter last digit as long as you want  to add:");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
	sum+=i;	//sum of natural number
	}
	printf("Addition :%d",sum);
}
