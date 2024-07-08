//8) WAP Find out length of string without using inbuilt function 

#include<string.h>
#include<stdio.h>
main(){
	char name[]="mahima";//9) WAP to reverse a string and check that the string is palindrome or not
#include<string.h>
#include<stdio.h>
main(){
	char name1[100];
	strcpy(name1,name);//copy actual sting 
	int len =strlen(name);//find length



//reversing string
	for(i=0;i<len/2;i++){
		char temp;
		temp=name[i];
		name[i]=name[len-i-1];
		name[len-i-1]=temp;
	}
	
	if(strcmp(name,name1)==0){
		printf("palidrome\n");
	}
	else{
		printf("not palindrome\n");
	}

} 
	printf("Length of string:%d",sizeof(name)-1);
}
