#include<iostream>
#include<string>
using namespace std;

void sum_digits(int number){
	int sum=1;
	while(number!=0){
		sum=sum * number%10;
		number=number/10;
			//cout<<number<<endl;
	
		
	}
	
	
	cout<<sum<<endl;
}





int main(){
	
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	sum_digits(number);
	
}
