//3)WAP to Find Area And Circumference of Circle
//area = 3.14 * r * r circumference = 2 * 3.14 * r


#include<stdio.h>
#define PI 3.14   //const varible
main(){
int radius;
printf("Enter the radius:");
scanf("%d",&radius);
printf("Area of circle = %.2f\n",(float)PI*radius*radius);//  3.14*r*r
printf("Circumference of Circle = %.2f\n",(float)PI*radius*2);  //2*PI*r
}
