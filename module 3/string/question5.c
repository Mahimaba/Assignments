//5)Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
main(){
	char n[]="maaa";
	char n1[]="maaa";


int len=strlen(n);
char a;
int count=0,i;
for(i=0;i<len;i++){
	
if(n[i]==n1[i] && (n[i]=='\0'&& n1[i]=='\0'))
{
printf("0");
}
else if(n[i]==n1[i])
	{
	i++;
	continue;
	}
else if(n[i]!=n1[i]) {
		if(n[i]>=n1[i]){
			printf("1");
			break;
		
		}
		else{
			printf("-1");
			break;
	
		}
	}
	
}



}
