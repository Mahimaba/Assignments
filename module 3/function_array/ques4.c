//4). WAP to find factorial using recursion

#include<stdio.h>
 int fact(int a){
		int fact1;
if(a==1){
	return 1;
	}
else{
	 return (a*fact(a-1));
      }

}
main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int fact1=fact(n);//calling and store
	printf("%d",fact1);
	
}
