/*22)Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

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
