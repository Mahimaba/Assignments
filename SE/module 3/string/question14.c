//14)14.Write a program in C to combine two strings manually 

#include<stdio.h>
#include<string.h>
main(){
	char a[20],b[10];
	int i,j;


//first input string
	printf("Enter the string:");
	gets(a);
    printf("Copy string is:%s\n",a);

//second input string
	printf("Enter the string:");
	gets(b);
	printf("Copy string is:%s\n",b);


	for(i=0;a[i]!='\0';i++);//length of string
	
	
	
	for(j=0;b[j]!='\0';j++){
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("Copy string is:%s",a);
}
