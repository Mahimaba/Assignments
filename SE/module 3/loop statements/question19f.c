//19-f)
//19-E)
//19-b)
#include<stdio.h>
main(){
	int i,j,num;
	printf("enter the number:");
	scanf("%d",&num);//colume 
	i=1;
	
	while(i<=num){
		j=1;
		char ch=65;
		while(j<=i){
			printf("%c",ch);
			ch++;
			j++;
			
			
		}
		printf("\n");
		i++;
	}
}
