#include <iostream>
using namespace std;

int main()
{
	cout<<"Swapping Program"<<endl;
	int x,y;
	x = 5;
	y = 6;
	cout<<"Before swapping: "<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	
	int temp = x;
	x = y;
	y = temp;
	
	cout<<"After swapping: "<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}