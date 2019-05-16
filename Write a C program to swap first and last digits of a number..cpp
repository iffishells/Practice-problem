#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void swap(int number){
	int first;
	int last;
	int a ;
	int b;
	
	int countdigits;
	int swapvalue;
	first=number/10;
	last=number%10;
	first=number;
	while(first>=10){
		first=first/10;
	}
	cout<<"first "<<first<<endl;
	cout<<"last "<<last<<endl;
	countdigits=log10(number);
	a=first * (pow(10 , countdigits));
	b=number % a;
	number= b/10;
	cout<<"countdigits "<<countdigits<<endl;
	swapvalue=last * (pow(10 , countdigits)) + (number * 10 + first);
	cout<<"swap value : "<<swapvalue<<endl;
}





int main(){
	int number;
	cout<<"Enter the number  : ";
	cin>>number;
	swap( number);	
}
