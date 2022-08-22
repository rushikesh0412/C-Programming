#include <iostream>
using namespace std;

/*
	-Function Overloading in C++
		--Function overloading is a feature in C++ where two or more function
		can have the same name but different parameters.
		
		--Function overloading can be considered as an example of polymorphism 
		feature in C++.
		
	-An Overloading function must have:
		* Different type of parameters
		* Different number of parameters
		* Diffrenet sequence of parameters.
	
	
*/
void add()		//1	
{
	cout<<"Function 1"<<endl;
	cout<<"nothing to print!"<<endl;
}
int add(int a, int b)		//2
{
	cout<<"Function 2"<<endl;
	return a+b;
}
double add(double a, double b)		//3
{
	cout<<"Function 3"<<endl;
	return (a+b);
}
int add(int a, int b, int c)		//4
{
	cout<<"Function 4"<<endl;
	return (a+b+c);
}
double add(int a, double b)			//5
{
	cout<<"Function 5"<<endl;
	return (a+b);
}
double add(double a, int b)				//6
{
	cout<<"Function 6"<<endl;
	return (a+b);
}

int main()
{
	add();
	cout<<"Addition is: "<<add(1,2)<<endl;
	cout<<"Addition is: "<<add(3.5, 4.5)<<endl;
	cout<<"Addition is: "<<add(3,4,5)<<endl;
	cout<<"Addition is: "<<add(3,4.5)<<endl;
	cout<<"Addition is: "<<add(3.5,4)<<endl;
	
	return 0;
}