//6)Write a program in C to count the total number of alphabets, digits and special 
//characters in a string. 



#include<stdio.h>
#include<string.h>
main(){
	char name[]="mahima9494@gmail.com";
	int len=strlen(name);//length
	int digit=0,sc=0,chare=0,i;
	
	//for loop 
	for(i=0;i<len;i++){
		if(name[i]>='a' && name[i]<='z' ||(name[i]>='a' && name[i]<='z')){
			chare++;
		}
		else if(name[i]>='0' && name[i]<='9'){
			digit++;
		}
		else{
			sc++;
		}
		
		
	}
	
		printf("chare:%d\n",chare);
		printf("digit:%d\n",digit);
		printf("sc:%d\n",sc);}
