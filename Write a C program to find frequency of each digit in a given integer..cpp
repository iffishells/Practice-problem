#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

void find_frequency_digits(){
	char number [20];
	int i;
	cout<<"Enter the number : ";
	cin>>number;
	//cout<<"these are the number "<<number<<endl;
	int lenght;
	lenght=strlen(number);
	int count0=0;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0;
	int count5=0;
	int count6=0;
	int count7=0;
	int count8=0;
	int count9=0;
	cout<<"lenght "<<lenght<<endl;
	for(i=0 ;i <lenght ; i++){
		if(number[i]=='1')
		{
			count1++;
		}
		else if(number[i]=='2'){
			count2++;
		}
		else if (number[i]=='3'){
			count3++;
		}
		else if(number[i]=='4')
		{
			count4++;
		}
		else if (number[i]=='5')
		{
			count5++;
		}
		else if(number[i]=='6')
		{
			count6++;
		}
		else if (number[i]=='7')
		{
			count7++;
		}
		else if(number[i]=='8')
		{
			count8++;
		}
		else if (number[i]=='9')
		{
			count9++;
		}
		else if(number[i]=='0')
		{
			count0++;
		}
		
		else
		{
			cout<<"nothing bro! "<<endl;
		}
		//cout<<"count !"<<count0<<endl;
	}
	
	cout<<"count 0 is times = "<<count0<<endl;
	cout<<"count 1 is times = "<<count1<<endl;
	cout<<"count 2 is times = "<<count2<<endl;
	cout<<"count 3 is times = "<<count3<<endl;
	cout<<"count 4 is times = "<<count4<<endl;
	cout<<"count 5 is times = "<<count5<<endl;
	cout<<"count 6 is times = "<<count6<<endl;
	cout<<"count 7 is times = "<<count7<<endl;
	cout<<"count 8 is times = "<<count8<<endl;
	cout<<"count 9 is times = "<<count9<<endl;
	
}







int main(){
//	int number ;
//	cout<<"Enter the number  " ;
//	cin>>number;	
	find_frequency_digits();
	
	
	
}
