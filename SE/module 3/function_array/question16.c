//16)Accept 5 numbers from user and perform sum of array

#include<stdio.h>
main(){
	int a[5],n1,i,sum=0;
	for(i=0;i<5;i++){
		printf("Enter the array %d index value:",i);
		scanf("%d",&n1);
		a[i]=n1;
	}
	for(i=0;i<5;i++){
		sum+=a[i];
	}
	printf("Sum of array Elements:%d",sum);
}
