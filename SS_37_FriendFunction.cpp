#include <iostream>
using namespace std;

/*
What is friend function?
	--A friend function of a class is defined that class scope but it has the 
	right to access all private and protected members of the class.
	
	--Even rhough the prototype for friend function appear in the class definitio,
	friends are not member functions.
	
	Why do we need friend functio?
	--Spwcial case when class's private data needs to be accessed directly without
	using object of that class.
	
	--operator overloading

*/

class Distance 
{
	private:
		int meter;
	public:
		Distance()
		{
			meter = 0;
		}
		void displayData()
		{
			cout<<"Meters value: "<<meter<<endl<<endl;
		}
		//Prototype or signature
		friend void addValue(Distance &d);
};
void addValue(Distance &d)
{
	d.meter = d.meter + 5;
}
int main()
{
	Distance d1;  //meter = 0;
	d1.displayData();	//0
	
	//The friend function call
	addValue(d1);	//pass by reference
	
	d1.displayData();	//5
	
	return 0;
}