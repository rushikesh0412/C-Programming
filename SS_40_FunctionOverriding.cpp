#include <iostream>
using namespace std;


/*
Function Overriding in C++:
	--If derived class defined same function as defined in its base class, 
	it is known as function overriding in C++.
	--If you create an object of the derived class and call the member function 
	which exists in both classes (base and derived), the member function of the 
	derived class is invoked and the function of the base class is ignored.
	--It enables you to private specific implementation of the function which is
	already provided by its base class.
*/ 

class Animal{
	public:
		void makeSound()
		{
			cout<<"Animal Sound"<<endl;
		}
};
class Dog : public Animal{
	public:
		
		void makeSound()
		{
			cout<<"Dogs bark"<<endl;
		}
		
};
class Cat : public Animal{
	public:
		void makeSound()
		{
			cout<<"Cats meow"<<endl;
		}
};
int main()
{
	Animal a;
	a.makeSound();
	
	Dog d;
	d.makeSound();
	
	Cat c;
	c.makeSound();
	
	return 0;
}