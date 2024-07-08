//9)C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
main(){
	char key;
	printf("Press any key:");
	scanf("%c",&key);//input key value
	if(key>='A' && key<='Z'){
		printf("UPPERCASE");//if between A to Z
		
		
	}
	else if(key>='a' && key<='z'){
		printf("LOWER CASE");//between a to z
	}
	else if(key>='0' && key<='9'){
		printf("DIGIT"); // for digit
	}
	else{
		printf("SPECIAL CHARACTER");
	}
}
