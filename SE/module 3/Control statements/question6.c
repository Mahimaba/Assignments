//6)Find the Character Is Vowel or Not
#include<stdio.h>
main(){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'
	||ch=='u'){
		printf("Vowel");
	}
	else{
		printf("Not Vowel");
	}
}
