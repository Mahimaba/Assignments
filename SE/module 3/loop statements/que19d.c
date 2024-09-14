//19-d)
#include<stdio.h>
main(){

int i,j,num;
	printf("enter the number:");
	scanf("%d",&num);//colume 
	i=1;
	while(i<=num){
		j=1;
		while(j<=i){
			printf("*");
			j++;
		
			
		}
		printf("\n");
		i++;
		}
		i=2;
		while(i<=num){
		j=num;
		while(j>=i){
			printf("*");
			j--;
		
			
		}
		printf("\n");
		i++;
}
		
}	
