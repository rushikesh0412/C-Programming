#include <iostream>
using namespace std;

/*
Inheritance in C++:
	--Inheritance allows us to define a class in terms of(from another) another class.
	--Provides REUSABILITY and MAINTAINAMILITY of CODE.
	--The idea of inheritance implements the IS-A relationship. For example, 
	mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on.
	--The class from which the new class inherits properties (data members and 
	member functions) is called BASE CLASS and the new created class is called 
	DERIVED CLASS.
	
	--Syntax - class derived-class: access-specifier base-class
	{
		//data members and member functions of derived class
	}
	
	1. Single level inheritance 
	2. Multi level inheritance 
	3. multiple inheritance
	4. Hierarchical inheritance
	5. Hybrid inheritance
	
*/

 //Base class
class Shape{
	protected:
		int width;
		int height;
	public:
		void setWidth(int w)
		{
			width = w;
			
		}
		void setHeight(int h)
		{
			height = h;
		}
};
//Derived class
class Rectangle: public Shape{
	public:
		int getArea()
		{
			return (width*height);
		}
};


int main(void)
{
	Rectange rect;
	
	rect.setWidth(5);
	rect.setHeight(7);
	
	//Print the area of the object
	cout<<"Total area: "<<rect.getArea()<<endl;
	
	return 0;
} 