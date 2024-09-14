////2)Define a class to represent a bank account. Include the following members: 
//3. Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
// 
//Member Functions 
// -To assign values -To deposited an amount -To withdraw an amount after checking balance -To display name and balance



#include<iostream>
using namespace std;
class Bank{
	private:
		
		
		//private data member 
		string name;
		string acoount_num;
		string type_of_Accout;

		
	public:
		static	int balance;
	char choice;
	   void setinformation(string n,string num,string type){    ///assign the value in private data member
	   	name=n;
	   	acoount_num=num;
	   	type_of_Accout=type;
//	   	balance=b;
	   	
	   	}	
	   	
	   	
	   	
	   	void getinfromation(){                                             //print the details 
	   	cout<<"Your name is :"<<name<<endl;
	   	cout<<"Your Account number is :"<<acoount_num<<endl;
	   	cout<<"Type of account is :"<<type_of_Accout<<endl;
	   	cout<<"Your Balance is :"<<balance<<endl;
	    cout<<"---------------------------------------------------------------------------------------"<<endl;
	   	
	   	}
	   	
	   	
	   	// function for deposite 
	   	
		   void deposite(int deposite){          
		 	cout<<"Your name is :"<<name<<endl;
		 	balance+=deposite;
		 	cout<<"Your Balance aftre Deposite:"<<balance<<endl;
		 	
		 }  
		 
		 
		 //function for withdraw
		 void withdraw(int w){
		 	cout<<"Your name is :"<<name<<endl;
		 	balance-=w;
		 	cout<<"Your Balance aftre Withdraw:"<<balance<<endl;
		 	
		 } 
		 
		 
		 //exit function
		  void exit(){
		  	cout<<"_____________________________________________________________your final amount_____________________________________________"<<endl;
		 	cout<<"Your name is :"<<name<<endl;
		 	cout<<"Your Balance aftre Withdraw:"<<balance<<endl;
		 	
		 }  	
	
};



int Bank::balance=3500;
main(){
	
	
	//data member of main class
	char choice;
	char D_W;
	int deposite;
	int withdraw;
	
	
Bank ob;//       craete object

// call the function
ob.setinformation("mahima","123456789111","saving");	
ob.getinfromation();



cout<<"Enter d-diposite  or w-withdraw :"<<endl;
cin>>D_W;     //choice               

while(D_W!='e'){

//if enter d than in deposite section
	
     if(D_W=='d'){
	      cout<<"Enter deposite amount:"<<endl;
          cin>>deposite;	
	      ob.deposite(deposite);
      }
     else if (D_W=='w'){
          cout<<"Enter withdraw amount:"<<endl;
          cin>>withdraw;	
        ob.withdraw(withdraw);
       }
    
    
cout<<"Enter d-diposite  or w-withdraw  e-exit:"<<endl;
cin>>D_W; 
    
}

    
    	ob.exit();//function calll
    cout<<"Viste again"<<endl;	


}
