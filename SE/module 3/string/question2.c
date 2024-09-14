//2)Write a program in C to separate individual characters from a string.

#include<stdio.h>
#include<string.h>
main(){
	char name[7]="mahima";
	int i;

	for(i=0;i<6;i++){
		printf("%d index value:%c\n",i,name[i]);//individual characters
	}
}
