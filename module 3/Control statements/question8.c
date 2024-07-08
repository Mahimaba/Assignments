/*8)WAP to accept the height of a person in centimeters and categorize the
person according to their height*/
#include<stdio.h>
main(){
	float height;
	printf("Enter the Height:");
	scanf("%f",&height);//input height
	if(height<150.0){
		printf("Person id Dwarf");// to short
	}
	else if(height>=150.0 && height<165.0){
		printf("Person is average height");//average hight
	}
	else if(height>165.0 && height<190.0){
		printf("person is taller");
	}
	else{
		printf("Abnormal height");
	}
}
