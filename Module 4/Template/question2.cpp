//2)Write a program of to sort the array using templates
#include<iostream>
using namespace std;

//tempate for sorting 
template <class t> void After_sorting(t aa[]){
	int i,j;
	cout<<"This is accending order function"<<endl;
	for(i=0;i<=5;i++){
		for(j=5;j>=i;j--){
			
			//swap logic 
			if(aa[i]>aa[j]){
				t temp=aa[i];
              	 aa[i]=aa[j];
	             aa[j]=temp;
	             
			}
		}
		cout<<aa[i]<<"\t";
	}
	cout<<endl;
}
//template for print the array
template <class t> void Before_sorting(t bb[]){
	int i,j;
	cout<<"Before the sorting :"<<endl;
	for(i=0;i<=5;i++){
		
		cout<<bb[i]<<"\t";
	}
	cout<<endl;
}
main(){
	int a[]={2,6,33,5,6,7};
	Before_sorting(a);//template function call
	After_sorting(a);
	char aa[]={'v','g','r','u','i','o'};
	Before_sorting(aa);
	After_sorting(aa);

}
