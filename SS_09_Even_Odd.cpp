#include <iostream>
using namespace std;

int main()
{
	cout<<"Even-Odd Program"<<endl;
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num%2 == 0)
	{
		cout<<"Even Number"<<endl;
	}
	else
	{
		cout<<"Odd Number"<<endl;
	}
	
	return 0;
}