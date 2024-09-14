//7)Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>
main(){
	char name[100];
	char name1[100];
	printf("enter the name:");
	scanf("%[^\n]s",name);
	getchar();
	printf("enter the name:");
	scanf("%[^\n]s",name1);
	printf("name1 string: %s",strcpy(name1,name));
}
