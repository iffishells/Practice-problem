#include<iostream>
#include<cmath>
using namespace std;
void find_factors(){
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	int i;
	cout<<"factors of "<<num<<endl;
	for(i=1 ; i <=num ; i++){
		if(num%i==0){
			cout<<i<<endl;
		}
	}	
}





int main(){
	find_factors();
}
