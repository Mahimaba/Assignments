//12)WAP to accept 5 students name and store it in array
#include<stdio.h>
#include<string.h>


//inizilization of function
void Storedata(char name[][12],int size);
void DisplayArray(char name[][12],int size);
main(){
	char name[5][12],size=5;
	Storedata(name,size);//calling 
}



//define the function
void Storedata(char name[][12],int size){
	int i;
	for(i=0;i<size;i++){
		printf("enter the name:");
		scanf("%s",&name[i]);
	}
	DisplayArray(name,size);
}
void DisplayArray(char name[][12],int size){
		int i;
		for(i=0;i<size;i++){
		printf("%s\n",name[i]);
		
		
	}
}
