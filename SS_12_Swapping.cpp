#include <iostream>
using namespace std;

int main()
{
	
	cout<<"Swapping Program Without using third variable: "<<endl;
	int x,y;
	x = 5;
	y = 6;
	cout<<"Before Swapping: "<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	
	x = x+y;
	y = x-y;
	x = x-y;
	
	cout<<"After Swapping: "<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	
	return 0;
}