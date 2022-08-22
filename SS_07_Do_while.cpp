#include <iostream>
using namespace std;

int main()
{
	char myChar;
	
	
	do{
		cout<<"I am a Programmer!"<<endl;
		cout<<"Please enter x character to print the message again: ";
		cin>>myChar;
	}while(myChar == 'x');
	
	return 0;
}