//37)WAP to show
//ii. Vowel or Consonant using switch case
#include<stdio.h>
main(){
	char ch;
	printf("Press any character(A to Z or a to z):");
	scanf("%c",&ch);//user input
	switch(ch){
		
		//multipale case for single printf
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		 printf("Vowel");
		 break;
		default:
			printf("Consonant");
			
	}
}
