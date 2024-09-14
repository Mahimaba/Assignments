//19-E)
//19-b)
#include<stdio.h>
main(){
	int i,j,num;
	printf("enter the number:");
	scanf("%d",&num);//colume 
	i=1;
	int ch=1;
	while(i<=num){
		j=1;
		while(j<=i){
			printf("%d",ch);
			ch++;
			j++;
			
			
		}
		printf("\n");
		i++;
	}
}
