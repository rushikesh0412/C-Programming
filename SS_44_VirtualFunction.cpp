#include <iostream>
using namespace std;

//Base class
class Animal{
	public:
		virtual void eat()
		{
				cout<<"I'm eating generic food."<<endl;
		}
};
//Derived class 1
class Cat : public Animal{
	public:
		void eat()
		{
			cout<<"I'm eating a rat"<<endl;
		}
};
//Derived class 2
class Dog : public Animal{
	public:
		void eat()
		{
			cout<<"I'm eating a cat Food."<<endl;
		}
};
void function1(Animal *xyz)
{
	xyz->eat();
}
int main()
{
	Animal *ptr;
	
	Cat catObj;
	Dog dogObj;
	
	ptr = &catObj;
	function1(ptr);
	
	ptr = &dogObj;
	function1(ptr);
	
	Animal a;
	a.eat();
	return 0;
}