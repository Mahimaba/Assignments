//17)Calculate 5 numbers from user and calculate number of even and odd using of while loop


#include<stdio.h>
main(){
	int i,num[5],n_even=0,n_odd=0;
	
	//store 5 number in array
	for(i=0;i<5;i++){
		printf("enter the number %d:",i+1);
		scanf("%d",&num[i]);
	}
	
	//check number is odd and even
	i=0;
	while(i<5){
		if(num[i]%2==0){
			n_even++;
		}
		else{
		n_odd++;	
		}
		i++;
	}
		printf("%d odd number\n",n_odd);
		printf("%d even number",n_even);
}
