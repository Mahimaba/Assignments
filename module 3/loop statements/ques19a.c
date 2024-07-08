//19-a)
#include<stdio.h>
main(){
	int i,j,num;
	printf("enter the number:");
	scanf("%d",&num);//colume 
	i=1;
	while(i<=num){
		j=1;
		while(j<=i){
			j++;
			if(j%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
			
		}
		printf("\n");
		i++;
	}
//	for(i=1;i<=num;i++){
//		for(j=1;j<=i;j++){
////			printf("*");
//if(j%2==0){
//	printf("0");
//	
//}
//else{
//	printf("1");
//}
//		}
//		printf("\n");
//	}
}
