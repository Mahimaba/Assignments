//11)WAP to accept 5 numbers from user and display in reverse order using for loop and array



#include<stdio.h>

//function inizliazton
void StoreData(int a[],int size);
void displayArray(int a[],int size);
void reverse(int a[],int size);



main(){
	int a[5],size=5;
	StoreData(a,size);//function call
}


//function define
void StoreData(int a[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	printf("Before the reversing:\n");
	displayArray(a,size);
}




void displayArray(int a[],int size){
	int i;
for(i=0;i<size;i++){
		printf("%d\t",a[i]);

	}
	reverse(a,size);	
}



void reverse(int a[],int size){
	int i,temp;
	for(i=0;i<=size/2;i++){
		temp=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=temp;
		
	}
	printf("\nAfter the reversing :\n");

for(i=0;i<size;i++){
		printf("%d\t",a[i]);

	}
	
}
