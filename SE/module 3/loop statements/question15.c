//15)Calculate sum of 10 numbers using of while loop
#include<stdio.h>
main(){
	int i,sum=0,num;
	printf("Enter the number where you want start:");
	scanf("%d",&num);//strating digit
	i=num;
	
	//num+9 is end digit 
	while(i<=num+9){
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}

