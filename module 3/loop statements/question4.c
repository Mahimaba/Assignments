//4)WAP to print table up to given numbers
#include<stdio.h>
main(){
	int number,i=1;
	printf("which multiplication table you want:");
	scanf("%d",&number);
	while(i<=10){
		printf("%d * %d =%d\n",number,i,i*number);//5*1=5,5*2=10......
		i++;
	}
	
}
