//5) Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the 
//marks obtained in two subjects and class result contains the total marks 
//obtained in the test. The class result can inherit the details of the marks 
//obtained in the test and roll number of students. (Multilevel Inheritance) 
#include<iostream>
using namespace std;
class Students{
	protected:
		
		//potected data member
		string name;
		int roll;
		public:
			
			//constructore to assign value
			Students(string n,int r):name(n),roll(r){};
			
			//function for print the value
			void getdata(){
				cout<<"Name :"<<name<<"\t";
				cout<<"Roll :"<<roll<<"\n";
			}
};

//multi level inheritance
class Test:public Students{
		protected://protectd data member
		int maths;
		int science;
		public:
			
			//constructore
			Test(string n,int r,int m,int s):Students(n,r),maths(m),science(s){};
			void getdata(){
				cout<<"Math :\t"<<maths<<"\t";
				cout<<"Science :\t"<<science<<"\n";
			}
	
};


class Result:public Test{
	protected:
		int total;
		public:
			
			
			//constructore in inheritance
		Result(string n,int r,int m,int s):Test(n,r,m,s),total(m+s){
			cout<<"Name :"<<name<<endl;
			cout<<"Total marks:"<<total<<endl;
		}
};
main(){
	string n;
	int r;
	
	//user input data member
cout<<"Enter your name:";
cin>>n;
cout<<"Enter your roll number:";
cin>>r;
cout<<"\n";
cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Your Result >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	Result rr(n,r,60,79);//constructore call
}
