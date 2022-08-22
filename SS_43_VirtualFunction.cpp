

/*
	Virtual Finstion in C++
		--A virtual function is a member function which is declared within base class 
		and is re-defined (Overriding) by derived class.
		--When you refer to a derived class object using a pointer or a reference to the 
		base class, You can call a virtual function for that object and execute the derived 
		class's version of the function.
		 -Virtual functions ensure that the correct function is called for an object,
		 regarding of the type reference (or pointer) used for function call.
		 -they are mainly used to achieve Runtime polymorphism.
		 -Functions are declared with a virtual keyword in base class.
		 -The resolving of function call is done at Run-time.
		 
*/

#include <iostream>
using namespace std;


class MyBase{
	public:
		void show()
		{
			cout<<"Base class show function called"<<endl;
		}
		virtual void print()
		{
			cout<<"Base class print function called"<<endl;
		}
		
};

class MyDerived : public MyBase{
	public:
		void show()
		{
			cout<<"Derived class show function called"<<endl;
		}
		void print()
		{
			cout<<"Derived class print function called"<<endl;
		}
};
int main()
{
	MyBase *baseptr;
	MyDerived derivedObj;
	
	baseptr = &derivedObj;
	
	
	//runtime polymorphism
	baseptr->print();   //derived class print function called
	baseptr->show();	//Base class show function called
	
	return 0;
}


		 