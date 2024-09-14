//10).find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main(){
	float w,h,l;
	printf("Enter the weith:");
	scanf("%f",&w);  // value of weigth
	printf("Enter the heigth:");
	scanf("%f",&h);// value of heigth
	printf("Enter the length:");
	scanf("%f",&l);  //value of length
	printf("Area of a rectangular prism :%.2f",(float)2*(w*l+h*l+h*w));//A=2(wl+hl+hw)
}
