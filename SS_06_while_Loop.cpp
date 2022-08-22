#include <iostream>
using namespace std;

int main()
{
	char myChar;
	cout<<"Please enter a character: ";
	cin>>myChar;
	
	while(myChar == 'x')
	{
		cout<<"I am a Programmer!"<<endl;
		cout<<"Please enter a character: ";
		cin>>myChar;
	}
	
	return 0;
}