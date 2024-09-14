/*5)WAP to take two Array input from user and sort them in ascending or descending order as per 
user’s choice*/
#include<stdio.h>
void descending(int a[],int n){
		int j=0,i,max=0;
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(a[i]<=a[j]){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else{
			a[i]=a[i];
		}
	}
	printf("DECENDING:%d\n",a[i]);
}

}
void Acending(int a[],int n){
		int j=0,i,max=a[0];
for(i=0;i<n;i++){
	for(j=n-1;j>i;j--){
		if(a[i]>=a[j]){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else{
			a[i]=a[i];
		}
	}
	printf("Acending order:%d\n",a[i]);
}

}




main(){
	int n;
	printf("Enter the array size:");
	scanf("%d",&n);//size of array
	int a[n],b[n],c[n],max=0,i;
	
	
	//input array
	for(i=0;i<n;i++){
		int n1;
		printf("Enter the number:");
		scanf("%d",&n1);
		a[i]=n1;
	}
	printf("For Array 2:\n");
	for(i=0;i<n;i++){
		int n2;
		printf("Enter the number:");
		scanf("%d",&n2);
		b[i]=n2;
	}
	
	
	//enter the choice for dec or ase
	int choice;
	printf("Enter the 1-decending or 2-Asending:");
	scanf("%d",&choice);
	printf("\n");
	
	switch(choice){
		case 1:
			 descending(a,n);
			descending(b,n);
			break;
		case 2:
			Acending(a,n);
			Acending(b,n);
			break;
			
			
		
	}

}
