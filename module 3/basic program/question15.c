//15)Convert school’s name in abbreviated form
#include<stdio.h>
#include<string.h>
main(){
	char name[]="Dhoriben jayrajbhai patel";
	int i,j=0,k;
	int len=strlen(name);
	char short_name[len];//length of string

short_name[0]=name[0];//insert first charachter to new string variable
	printf("%c",short_name[0]);

for(i=1;i<len;i++){
	if(name[i]==' '){
	short_name[j++]=name[i+1];	
	}
	
}

//print short name
for(k=0;k<2;k++){

	printf("%c",short_name[k]);
}

    
     
}
