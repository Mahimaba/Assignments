//12)Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
#include<math.h>
main(){
	int num,i=0,rem;
	double armstrong;
	printf("Enter the number:");
	scanf("%d",&num);//input string
	int num1=num;
	int original=num;
	
	//find length of number
	while(num!=0){
		num=num/10;
		i++;
	}


	int j=0;
	while(num1!=0){
		
		rem=num1%10;
		num1=num1/10;
		armstrong+=(double)pow(rem,i);//find the armstrong number
		j++;
	}
	
//check for armstrong
	if(original==armstrong){
		printf("Armstrong Number");
	}
	else{
		printf("Not Armstrong Number");
	}
}
