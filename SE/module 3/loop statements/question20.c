#include<stdio.h>
main(){
	int i,j,n1;
	int number[5][10];//2D array 
	n1=1;
	
	
	//store the value in array
	for(i=0;i<=4;i++){
		for(j=0;j<=9;j++){
		
			
				number[i][j]=n1;
				n1++;
			
		}
	
		
	}
	
	//print the array
	for(i=0;i<=4;i++){
		for(j=0;j<=9;j++){
			
			if(i==0 && (j>=0 && j<=8)){
				printf("0%d\t",number[i][j]);
			}
			else{
			
		printf("%d\t",number[i][j]);
	            }
		}
		printf("\n");//for newline
	}
}
