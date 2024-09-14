//12)Write a program in C to read a sentence and replace lowercase characters with
//uppercase and vice versa

#include<string.h>
#include<stdio.h>
#include<ctype.h>
main(){
	char name[]="MaHiMa";
	int len=strlen(name);//length
	
	char new1[12];//copy array
	int i;
	for(i=0;i<len;i++){
		int ascii=name[i];
		if(ascii>='a' && ascii<='z' ){
			
			new1[i]=toupper(name[i]);

		}
		else if(ascii>='A' && ascii<='Z'){
			new1[i]=tolower(name[i]);

			
		}
	}
	printf(" before converting the string: %s\n",name);
	printf(" After converting the string: %s",new1);
}

