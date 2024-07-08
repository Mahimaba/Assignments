/*3)	WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/


#include<stdio.h>
main(){
	int i=0,j=0,n[10],even_n=0,odd_n=0,sum_even=0,sum_odd=0;
	while(i<10){
		printf("Enter number %d:",i+1);
		scanf("%d",&n[i]);//10 number from user
		i++;
	}
	while(j<10){
		if(n[j]%2==0){//even number conditon
		even_n++;
		sum_even+=n[j];//sum of even number
		}
	 else{
		odd_n++;
		sum_odd+=n[j];//sum of odd number
		
		}
		

		j++;
	}
	    printf(" %d Even numbers are there\n",even_n);
		printf("Sum of even numbers:%d\n",sum_even);
		printf(" %d odd numbers are there\n",odd_n);
		printf("Sum of even numbers:%d\n",sum_odd);
}
