#include <iostream>
using namespace std;

/* 
* Friend class in C++;
	A class can also be declared to be the friend of some other class. When we create a friend 
	class then all the member functions of the friend class also become the friend 
	of the other class. This requires the condition that the friend becoming class must be 
	first declared or defined (forward declaration).
*/

class MyClass1{
	friend class MyClass2; //MyClass2 is a friend of MyClass1
	private:
		int x;
	public:
		MyClass1(int a)
		{
			x = a;
		}
};
class MyClass2{
	public:
		void showData(MyClass1 obj)
		{
			cout<<"x value is: "<<obj.x<<endl;
		}
};
int main()
{
	MyClass1 obj1(5);
	
	MyClass2 obj2;
	obj2.showData(obj1);
	return 0;
}