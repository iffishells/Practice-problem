#include<iostream>
#include<math.h>
using namespace std;

void sum_digits(int number){
	int sum=0;
	int remainder=0;
	int temp;
	while(number> 0){
		temp=number%10;
		sum=sum+temp;
		number=number/10;
		cout<<"temp! "<<temp<<endl;
	}
	cout<<"sum "<<sum<<endl;
	cout<<"temp "<<temp<<endl;
	
}



int main(){
	int number;
	cout<<"Enter the  number ";
	cin>>number;
	sum_digits(number);
}
