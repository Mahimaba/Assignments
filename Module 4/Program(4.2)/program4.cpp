/*
2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor. 
*/
#include<iostream>
using namespace std;


//class create
class Cal{
	
	//public constructore create 
	public:
	Cal(int a,int b){
		cout<<"*********************************Constructore call*******************************************"<<endl;
		cout<<"Addition of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
		cout<<"subctraction of "<<a<<" and "<<b<<" is:"<<a-b<<endl;
		cout<<"Divison of "<<a<<" and "<<b<<" is:"<<(double)a/b<<endl;
		cout<<"Multiplication of "<<a<<" and "<<b<<" is:"<<a*b<<endl;
	}
};

main(){
int a,b;
cout<<"enter the value of a and b:"<<endl;
cin>>a>>b;//input value of a and b

//constructore call
Cal ob(a,b);	
}
