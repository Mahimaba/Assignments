//9)Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
#include<string.h>
main(){
	char name[100];
	int frq[124]={0};
	int i,j;
	
	//input string
	printf("Enter the string:");
	scanf("%[^\n]s",name);
	

//string array with 0 value
	for(i=0;i<124;i++){
		frq[i]=0;
	}
	
//in ascii index count increase	
	i=0;
	while(name[i]!='\0'){
		int ascii=(int)name[i];
        frq[ascii]+=1;
        i++;

	}
	
	
	//find max
	int max=0;
		for(i=0;i<124;i++){
	   if(frq[i]>frq[max]){
	   	max=i;
	   }	
	}
	
	
	//printf the max 
printf("%c:%d",max,frq[max]);	
}
