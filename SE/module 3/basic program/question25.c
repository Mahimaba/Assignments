//25)Accept 5 expense from user and find average of expense
#include<stdio.h>
main(){
	int expense[5],i=0,sum=0;
	while(i<5){
		printf("Enter the expense %d:",i);
		scanf("%d",&expense[i]);//store 5 expense in array
		sum+=expense[i];//sum of expense
		i++;
	}
	float avg=(float)sum/5;//average 
	printf("Average of expense is %.2f",avg);
	
}
