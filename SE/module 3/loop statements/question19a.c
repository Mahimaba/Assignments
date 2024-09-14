//19-a)


#include<stdio.h>
main(){
	int i,j,num;
	printf("enter the number of line for half triangle:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){


//if j is even than print 0
      if(j%2==0){
	printf("0");
       }
//if  j is odd than print 1
        else{
       	printf("1");
          }
	}
		printf("\n");
	}
}
