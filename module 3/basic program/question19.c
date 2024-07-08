//19)Calculate compound interest(annualy) A=P(1+ R/100)^n , ci=A-P
#include<stdio.h>
#include<math.h>
main(){
	int P,R,n,CI;
	printf("Enter the Principle amount :");
	scanf("%d",&P);//p value
	
	printf("Enter the  Rate :");
	scanf("%d",&R);//r value
	
	printf("Enter the number of year:");
	scanf("%d",&n);// numer of year
	
	
int amount=P*((float)(1+(float)R/100));

int final_amount=pow(amount,n);


	printf("%d\n",final_amount);
	
	
	CI=final_amount-P;//formula of CI
	printf("Compound Interset is:%d",CI);
	
}
