//2)WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
main(){
	int n[5],i;
	for(i=0;i<5;i++){
		printf(" Enter number %d:",i);
		scanf("%d",&n[i]);//array of integer
	}
	for(i=0;i<5;i++){
		printf("number %d:%d\t",i,n[i]);//display array
		
	}
	
}
