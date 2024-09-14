//14)Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
main(){
	int num[5],i,j,fact[5];
	for(i=0;i<5;i++){
		printf("Enter the value:");
		scanf("%d",&num[i]);//int array
	}
	for(i=0;i<5;i++){
		int fact=1;

		for(j=1;j<=num[i];j++){
			
			fact*=j;//factorial 
				
		}
		printf("Factorial of %d:%d\n",num[i],fact);
	
	
		
	}
	
}

