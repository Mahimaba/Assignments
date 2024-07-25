/*3)Create a class person having members name and age. Derive a class student having member percentage. Derive another
class teacher having member salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;

//parent class Teacher
class Teacher{
	private:
		int salary;//data member
		public:
			
			//set salary and get salary value
			void setsalary(){
				salary=1000;
			
			}
			int getsalary(){
				return salary;
			}
};



//parent class student
class Student{
	private:
		double per;  //private data member
		public:
			
			//set percantage and get percantage
			void setper(){
			per=83.00;
			
			}
			int getper(){
				return per;
			}
};


//base class drieved class from teacher and Student
class Person:public Teacher,public Student{
	private:
		string name;
		int age;
		public:
			
			//set the name and age
			void setinfo(){
				setper();
				setsalary();
				cout<<"Your name is:";
			    cin>>name;
				cout<<"Age is :";
				cin>>age;

			}
			
			//get the infromation of name,age salary,and percantage
			void getdata(){
				setinfo();
			cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
				cout<<"name is :"<<name<<endl;
				cout<<"Age is:"<<age<<endl;
				cout<<"Percantage is :"<<getper()<<endl;
				cout<<"Salary is:"<<getsalary();
			}
};
main(){
Person p;
p.getdata()	;
	
}
