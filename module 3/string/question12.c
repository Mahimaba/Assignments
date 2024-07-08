//12)Write a program in C to find the number of times a given word 'is' appears in
//the given string



#include<string.h>
#include<stdio.h>
main(){
	
	char name[]="is will check if is am free and is";
	int len1=strlen(name);
	char new1[200][200];
	int i,j=0,k=0;
	
	//for string in individul index in new array
	for(i=0;i<len1;i++){
		if(name[i]==' '){
		j++;
		k=0;	
			printf("\t");
		}
		else{
			new1[j][k]=name[i];

				k++;
		}
	
	}
int len2=j+1;
char isArray[]="is";
int count=0;

//compare two strinf

for(i=0;i<len2;i++){
	int result=strcmp(new1[i],isArray);
	if(result==0){
		count++;
	
	}
}
printf("\n'IS' is apprens in string is:%d",count);
}
