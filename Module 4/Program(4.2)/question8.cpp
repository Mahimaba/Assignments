//8. Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading 

#include<iostream>
using namespace std;
class Cal{
	public:
	cal(){
		int a,b;
		cout<<"Function overloding with no parameter:"<<endl;
		cout<<"Addition of a and b"<<endl;
		cout<<"Enter the a:"<<endl;
		cin>>a;
	cout<<"Enter the b:"<<endl;
		cin>>b;
		cout<<"Sum of :"<<a+b<<endl;	
}


	cal(int a,int b){
				cout<<"______________________________________________"<<endl;
			cout<<"Function overloding with two integer parameter:"<<endl;
		cout<<"Subtraction of a and b"<<endl;
		cout<<"Subtraction of :"<<a-b<<endl;
		
			}
			cal(double a,double b){
				cout<<"______________________________________________"<<endl;
			cout<<"Function overloding with two float parameter:"<<endl;
		cout<<"Division of a and b"<<endl;
		cout<<"Divison of :"<<a/b<<endl;
		
			}
};
main(){
Cal c;
c.cal();
c.cal(21,16);
c.cal(21.00,3.00);	
}
