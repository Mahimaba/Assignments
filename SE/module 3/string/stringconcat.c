//Write a program in C to combine two strings manually
#include<string.h>
#include<string.h>
main(){
	
	
	char name[]="mahima";
	char name1[]="dabhi";
	char new1[200];
	int len=strlen(name);
	int len1=strlen(name1);
	int i,j,k=0;
	for(i=0;i<len;i++)
	{
	
		new1[i]=name[i];
	k++;

		
	}

	strcat(new1," ");
		for(i=0;i<len1;i++)
	{
		new1[k]=name1[i];
		k++;
		
	}

	for(i=0;i<k;i++){
			printf("%c",new1[i]);
  }

}
