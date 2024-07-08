//8)Write a program in C to count the total number of vowels or consonants in a 
//string.

#include<string.h>
#include<stdio.h>
main(){
	char name[]="mahima dabhi";
	int len =strlen(name);//length
	int i,vowel=0,conste=0;
	
	//for loop
	for(i=0;i<len;i++){
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'
		||name[i]=='U')
		 vowel++;
		else
		 conste++; 
		 
		 
	}
	//print number of vowel and constle
	
	printf("number of vowel:%d\n",vowel);
	printf("number of conste:%d",conste);
}


