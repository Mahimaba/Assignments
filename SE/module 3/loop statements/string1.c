#include<stdio.h>
#include<string.h>
main(){
	char name[]="mahima dabhi";
	printf("%s\n",name);//
	char name1[20];
	printf("enter the string:");
//	scanf("%s",name1);//mahima dabhi
//	printf("%s",name1);//mahima =how to solve
	scanf("%[^\n]s",name1);
	printf("%s",name1);
	
}
