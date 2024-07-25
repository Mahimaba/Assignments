/*1. Write a program to find the multiplication values and the cubic values using 
inline function 


inline function means-compiler places the copy of the function code in place of the 
function call
*/

#include<iostream>
using namespace std;


//inline function 
inline int product(int a ,int b){
	return a*b;
}
inline int cubic(int a){
	return a*a*a;
}


main(){
int a;int b;//datamember


//input value from user
cout<<"Enter the A:"<<endl;
cin>>a;	
cout<<"Enter the B:"<<endl;
cin>>b;	

//function call
cout<<"the multipliaction of :"<<product(a,b)<<endl;
cout<<"the cubic  of "<<a<<" is :"<<cubic(a)<<endl;
cout<<"the cubic  of "<<b<<" is :"<<cubic(b)<<endl;
}
