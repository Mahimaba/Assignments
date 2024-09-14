

//10)Write a program in C to extract a substring from a given string 

#include<stdio.h>
#include<string.h>
main(){
char name[]="mahima dabhi";
int len;
len=strlen(name);//length of string




printf("%s\n",name);
char sub[len];

int start ,end;
printf("enter the start number:");
scanf("%d",&start);//staring index
printf("enter the start number:");
scanf("%d",&end);//last index

//subtract sub string in copy in anothe string array
int index=0,i;
for(i=start-1;i<=end-1;i++){
	sub[index]=name[i];
	printf("%c",sub[index]);
	index++;
	
}

//printf("%s",sub);
}
