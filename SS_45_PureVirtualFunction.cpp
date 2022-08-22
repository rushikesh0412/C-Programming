#include <iostream>
using namespace std;

class Shape{
	public:
		virtual void getArea() = 0;	//pure virtual function
};
class Circle : public Shape{
	public:
		/*
		void getArea()
		{
			cout<<"Enter radius: ";
			int r;
			cin>>r;
			cout<<"Area of circle is "<<(3.14*r*r)<<endl;
		}
		*/
		
};
class Rectangle : public Shape{
	public:
		void getArea()
		{
			cout<<"Enter length: ";
			int l;
			cin>>l;
			cout<<"Enter breadth: ";
			int b;
			cin>>b;
			
			cout<<"Area of rectangle: "<<(l*b)<<endl;
		}
		
};
int main()
{
	//Shape obj1;
	//Circle c1; //if getArea not implemented then this class also be abstract class
	//c1.getArea();
	
	Rectangle r1;
	r1.getArea();
}