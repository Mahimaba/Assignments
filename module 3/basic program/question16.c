//16)Convert country’s name in abbreviate form

#include<stdio.h>
#include<string.h>
main(){
	int i,j=0,k;
	char name[30];
	printf("Enter the country name:");
scanf("%[^\n]s",name);//input string
int len=strlen(name);//length of string

char short_name[len];
for(k=0;k<=len/2;k++){
	printf("%c",short_name[k]=name[k]);//store the half string in short_name
}


}
