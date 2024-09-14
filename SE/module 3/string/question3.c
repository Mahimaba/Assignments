//3)Write a program in C to print individual characters of a string in reverse order



#include<stdio.h>
#include<string.h>
main(){
	char name[]="mahima";
	int size=6,i;
	printf("before the reversing:\n");
    printf("%s\n",name);//actual string
    
    
    //for loop for reverseing
	for(i=0;i<size/2;i++){
		char temp;
		temp=name[i];
		name[i]=name[size-1-i];
		name[size-1-i]=temp;
		}
		
		
	printf("after the reversing:\n");
	printf("%s\n",name);//reverse string

}
