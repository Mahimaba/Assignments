//1. WAP to create simple calculator using class 



#include<iostream>
using namespace std;
class Cal{
	int a,b;       //data member
	public:
		
		
		//assin the value
		void setdata(int a1,int a2){
			a=a1;
			b=a2;
		}
		
		
		//display the value of data member
		void getdata(){
		cout<<"the value of first number is:"<<a<<endl;
		cout<<"the value of second number is:"<<b<<endl;
		cout<<endl;
			
		}
		
		//calculatore function
		void cal(){
			cout<<"Sum is            :"<<a+b<<endl;
			cout<<"subtraction is    :"<<a-b<<endl;
			cout<<"Multiplication is :"<<a*b<<endl;
			cout<<"Divison is        :"<<(double)a/b<<endl;
		}
};
main(){
	Cal ob;  //create a object
	
	//call the function 
	ob.setdata(1,4);
	ob.getdata();
	ob.cal();
}
