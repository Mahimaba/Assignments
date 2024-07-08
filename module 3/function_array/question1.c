//1)Write a program to find out the max number from given array using function

#include<stdio.h>
void max(int a[],int size);



//define the function
void max(int a[],int size){
		int i,max=0;
		for(i=0;i<=3;i++){
			if(max<a[i]){
				max=a[i];
			}
			else{
				max=max;
			}
				
		}
		printf("Max value in array:%d\n",max);
	
		
	}
main(){
	int size=4;
	int num[4]={2,4,6,7};
	max(num,size);//calling 
	
	
	
}
