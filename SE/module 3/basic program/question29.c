//29)Convert minutes into seconds and hours
#include<stdio.h>
main(){
	int minutes;
	printf("Enter the minutes:");
	scanf("%d",&minutes);
	printf("Seconds is:%d\n",minutes*60);//seconds=min*60
    printf("Hours is:%.2f",(float)minutes/60);//hours=min/60
}
