//13)13. Write a program in C to remove characters from a string except alphabets. 

#include<stdio.h>
#include<string.h>
main(){
	char name[]="sdds456456\--";
	char new1[200];
	int len=strlen(name);
	int i,k=0;
	for(i=0;i<len;i++){
		if(name[i]>='a' && name[i]<='z' ||(name[i]>='a' && name[i]<='z')){
			new1[k]=name[i];
			k++;
//			printf("%c",new1[k]);
		}
	}
	
	for(i=0;i<k;i++){
		printf("%c",new1[i]);
	}
}
