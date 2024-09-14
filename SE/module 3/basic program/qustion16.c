//16)Convert country’s name in abbreviate form

#include<stdio.h>
#include<string.h>
main(){
	int i,j=0,k;
	char name[30];
	printf("Enter the comapny name:");
scanf("%[^\n]s",name);
int len=strlen(name);

char short_name[len];
//short_name[0]=name[0];
for(i=0;i<len;i++){
	
		short_name[i]=name[i];
	
}
for(k=0;k<3;k++){

	printf("%c",short_name[k]);
}

//	printf("%s",name);
}
