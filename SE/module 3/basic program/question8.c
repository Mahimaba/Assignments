//8)Find circumference(Perimeter) of Rectangle formula : C = 4 * a (P=2l+2w)
#include<stdio.h>
main(){
	float wight,length;
	printf("Enter the wight:");
	scanf("%f",&wight);//value
	printf("Enter the length:");
	scanf("%f",&length);//value
	printf("Perimeter of Rectangle :%.2f",(float)2*wight+2*length);//AP=2wight+2lenght
}
