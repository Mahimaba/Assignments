//15) Write a program in C to find the largest and smallest words in a string. 


#include<stdio.h>
#include<string.h>
main(){
	char name[]="mahima is good girl it's ";
	int len=strlen(name);//length of string
	
	char new1[100][100];//another array
	
	
//name string  break in word and strore in another 2Darray
	int i,j=0,k=0,count=0;
	for(i=0;i<len;i++){
		if(name[i]==' '){
			j++;
			k=0;
		}
		else{
			new1[j][k]=name[i];
			
			k++;
			
		}
}




len=j+1;
count=0;
int index=0;
for(i=0;i<=j;i++){
	len=strlen(new1[i]);//find length
		if(count<len){
			count=len;
			index=i;
		}
	}
	
	
printf("%s:%d\n",new1[index],count);
}


