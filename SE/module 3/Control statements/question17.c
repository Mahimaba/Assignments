/*17)Write a C program to check whether a triangle can be formed with the given
values for the angles*/
#include<stdio.h>
main(){
	int a1,a2,a3;
	printf("Enter the angle 1:");
	scanf("%d",&a1);//value of a1
	
	printf("Enter the angle 2:");
	scanf("%d",&a2);//value 0f a2
	
	printf("Enter the angle 3:");
	scanf("%d",&a3);//value of a3
	if((a1+a2>a3)&&(a2+a3>a1)&&(a3+a1>a2)){
		printf("triangle can be formed with the given values for the angles");
	}
	else{
			printf("triangle can't be formed with the given values for the angles");
	
	}
	
}
