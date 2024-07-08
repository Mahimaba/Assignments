//14). Perform 2D matrix array 

#include<stdio.h>
main(){
	int a[2][3]={{1,2,3},{11,34,54}};
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
