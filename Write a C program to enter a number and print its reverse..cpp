#include<iostream>
#include<string >
#include<stdio.h>
using namespace std;
void print_reverse_number(int number){
	int sum;
	int number2;
	int real;
	for(int i = 0   ; number  > 0 ; i++){
		
		number2=number % 10;
		sum=sum+ number2 ; 
		real=number2;
		
		//bacially number2 give the last value of number so we run the loop when the number!=0 so what we did there that
		//real is variable we saved the number 2 in real and just print it  /..
		
		
		number=number/10;
		//cout<<"number "<<number <<endl;
		cout<<real;
	}
	//cout<<sum<<endl;









}




int main(){
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	print_reverse_number(number);
	
}
