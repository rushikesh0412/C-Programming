#include <iostream>
using namespace std;
/*
	Hybrid Inheritance in C++
	-Hybrid Inheritance is implemented by combining more than one type of 
	inheritance. for example: Combining Hierarchical inheritance and multiple 
	Inheritance.
*/


class Base{
	protected:
		int val;
};
class Derived1 : virtual public Base{
	public:
		Derived1()
		{
			val = 1;
		}
		void getValue()
		{
			cout<<"Derived 1 value of datamember is: "<<val<<endl;
		}
};
class Derived2 : virtual public Base{
	public:
		Derived2()
		{
			val = 2;
		}void getValue()
		{
			cout<<"Derived 2 value of datamember is: "<<val<<endl;
		}
};
class Derived3 : public Derived2, public Derived1{  //right class value set to val variable
	public:
		//2 copies of value in derived3
		void getValue()
		{
			//cout<<"Int value val: "<<endl;
			Derived1::getValue();
			Derived2::getValue();
			
		}
};
int main()
{
	Derived3 obj;
	obj.getValue();
	
	
	return 0;
}