//18). Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main(){
	int O_price,S_price,diffrence;
	printf("Enter the Origanal price: ");
	scanf("%d",&O_price);//actual price
	printf("Enter the selling price: ");
	scanf("%d",&S_price);//selling price
	diffrence=S_price-O_price;//profit or loss
	
	
	if(diffrence==0){
		printf("There is no profit or  no loss");//if 0 than no profit no loss
	}
	else if(diffrence>0){
		printf("There is profit");
	}
	else{
		printf("There is loss");
	}
	
	
	
}
