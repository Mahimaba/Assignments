//3) WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>
main(){
	char name[]="hemangini";
	int i,len;
	len=strlen(name);
	printf("%s\n",name);
	
	for(i=0;i<3;i++){
		char temp=name[i];
		name[i]=name[len-i-1];
		name[len-i-1]=temp;
	}
			printf("%s\n",name);

}
