//15).Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
void store(int a[],int size);//initilization
void display(int a[],int size);
void ascending(int a[],int size);


main(){
	int a[5],size=5;
	store(a,size);//calling
}


//define the functon
void store(int a[],int size){
	int i,n1;
	for(i=0;i<size;i++){
		printf("Enter the %d index value:",i);
		scanf("%d",&n1);
		a[i]=n1;
	}
	ascending(a,size);
	
}
void display(int a[],int size){
	int i;
	for(i=0;i<size;i++){
		printf(" the %d index value is: %d\n",i,a[i]);
		
	}
	
}
void ascending(int a[],int size){
	int i,j,temp;
	for(i=0;i<size;i++){
		for(j=size-1;j>i;j--){
			if(a[i]>a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			else{
				a[i]=a[i];
			}
		
		}
		
	}
	display(a,size);
	
}
