#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void palindrome_word( ){
	char text[10];
	int lenght , i;
	bool flag=false;
	cout<<"Enter the word! : ";
	cin>>text;
	lenght=strlen(text);
	cout<<lenght<<endl;
	for(i=0; i<lenght ; i++){                       //civic
		if(text[i]!=text[lenght-i-1]){
		
		flag=true;
		break;
	}
}	
	if(flag==false){
		cout<<"this is   palindrome "<<text<<endl;
	}else{
		cout<<" this is not the palindrome  "<< text<<endl;
	}

}





int main(){
	palindrome_word();
}
