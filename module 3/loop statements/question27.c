//27)

#include<stdio.h>
main(){
	int i,j,num;
	float sum;
	printf("Enter last digit as long as you want  to add:");
	scanf("%d",&num);
	int n1=1;
	for(i=1;i<num;i++){
		
	
		
       if(i%2==0){
       	sum-=(float)n1/(n1+1);
       
      
	   }
	   else{
	   	sum+=(float)n1/(n1+1);
  
	   }
	   n1++;
	 

	}
	  printf("Addition :%f\n",sum);
	
}
