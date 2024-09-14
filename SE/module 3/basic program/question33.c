//33)C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
#include<math.h>
main(){
	int n1;
	printf("Enter the number:");
	scanf("%d",&n1);
	printf("%d^1 is:%.2lf\n",n1,(double)pow(n1,1)); //n1
	printf("%d^2 is:%.2lf\n",n1,(double)pow(n1,2));//n1*n1
	printf("%d^3 is:%.2lf\n",n1,(double)pow(n1,3));//n1*n1*n1
	
}
