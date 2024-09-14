//13)WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include<stdio.h>

//initiliaztion
void dataStore(int a[],int size);
void displayArray(int a[],int size);
main(){
	int a[5],size=5;
	dataStore(a,size);//calling

	
}


//define the functon
void dataStore(int a[], int size){
	int n1,i;
	for(i=0;i<size;i++){
	
	printf("Enter the number:");
	scanf("%d",&n1);
	if(n1%2==0){
		printf("%d is even\n",n1);
	}
	else{
			printf("%d is odd\n",n1);
	}
	a[i]=n1;}
	displayArray(a,size);
	
}
void displayArray(int a[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
}
