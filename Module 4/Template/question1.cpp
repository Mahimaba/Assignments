//1)Write a program of to swap the two values using template
#include<iostream>
/*
Refernce variable 
int a=10//10
int &b=a //b=10
*/


using namespace std;
template<class t>
void swappp(t &a,t &b){//use reference variable
//swwap logic
	t temp=a;
	a=b;
	b=temp;
cout<<"After th swaping AA:"<<a<<endl;
cout<<"After th swaping BB:"<<b<<endl;
}
main(){
	int a=10,b=49;
//	char a1='c',b1='h';
	cout<<"Before th swaping AA:"<<a<<endl;
	cout<<"Before th swaping BB:"<<b<<endl;
	swappp(a,b);
	
}
