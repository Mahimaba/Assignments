/*5)Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) */


#include<iostream>
using namespace std;


//base class

class Cricketer{
	
	
	//private member of base class
	string name;
	int age;
	public:
		
    //assigen the value in private data member
	void setdata(){
		cout<<"Enter the name:";
		cin>>name;
		cout<<"age is:";
		cin>>age;
	}
	
	//print the private data member value
	void getdata(){
		cout<<"name is :"<<name<<endl;
		cout<<"age is :"<<age<<endl;
	}
};


//drived class
class batsman:public Cricketer{
	
	private://private member
		int total_run;
		int total_match;
		int avg_run;
		int best_performance=200;
		
public://public function

	void setbatsmandata(){
		
		//setdata in datamember
		cout<<"Enter the total run:";
		cin>>total_run;
		total_match=10;
		avg_run=total_run/	total_match;
		}
	void getbatsmandata(){
		
		//print the data
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		getdata();
		cout<<"Total run:"<<total_run<<endl;
		cout<<"Total match:"<<total_match<<endl;
		cout<<"avg run:"<<avg_run<<endl;
		cout<<"best performance:"<<best_performance<<endl;
		
	}
		
	 
};
main(){
	
	//object of drieved class
	batsman c;
	c.setdata();//call the function 
	c.setbatsmandata();
	c.getbatsmandata();

}
