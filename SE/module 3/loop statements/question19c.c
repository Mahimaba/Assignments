//19-c)
#include<stdio.h>
main(){
	int i,j,k,num;
	printf("Enter the number:");
	scanf("%d",&num);
	i=1;
	while(i<=num){
		j=num;
		while(j>=i){
			printf(" ");
			j--;//print space
		}
		k=1;
		while(k<=i){
			printf("*");
			k++; //print star
		}
		k=2;
		while(k<=i){
			printf("*");
			k++;//print star
		}
		printf("\n");
	i++;
	}
}
