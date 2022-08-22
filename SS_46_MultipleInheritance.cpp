#include <iostream>
using namespace std;

/*
	multiple Inheritance in C++
	--Multiple inheritance is a feature of C++ where a class can inherit from 
	more than one classes.
	
*/
//Base class 1
class A{
	public:
		void printMessage()
		{
			cout<<"Class A print messaeg function"<<endl;
		}
};
//base class 2
class B{
	public:
		void printMessage()
		{
			cout<<"Class B print messaeg function"<<endl;
		}
};
//Derived class
class AB : public A, public B{
	public:
		void printMessage()
		{
			A::printMessage();
			B::printMessage();
			cout<<"Class AB print messaeg function"<<endl;
		}
		//printMessage() -> class A
		//printMessage() -> class B
};

int main()
{
	AB obj;
	obj.printMessage();
	
	return 0;
}