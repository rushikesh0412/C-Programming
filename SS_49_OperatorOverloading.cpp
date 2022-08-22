#include <iostream>
using namespace std;

/*
	Operator Overloading in C++:
	C++ allows you to specify more one definition for an operator in the same
	scope, which is called operator overloading.
	-you can redefine or overload most of the built- in operators available in c++
	-It is a type polymorphism in which an operator is overloaded to give user defined 
	meaning to it.
	-Almost any operator can be overloaded in C++. However there are few operator 
	which can not be overloaded. Operator that are not overloaded are follows-
		-scope operator(::)
		-sizeof
		-member selector - (.)
		-member pointer selector - (*)
		-ternary operator - (?:) 
*/

class Complex{
	private:
		int real, imag;
	public:
		Complex(){
			real = 0;
			imag = 0;
		}
		Complex(int r, int i){
			real = r;
			imag = i;
		}
		void print()
		{
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
		
		//Operator Overloading Syntax
		Complex operator + (Complex c)
		{
			Complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			
			return temp;
		}
		
};
int main()
{
	Complex c1(5,4);
	Complex c2(2,5);
	Complex c3(1,1);
	Complex c4;
	
	c4 = c1+c2+c3;		//c3 = c1.add(c2);
	
	c4.print();
	/*
	int x = 5;
	int y = 4;
	int z = x + y;
	cout<<"z value: "<<endl;
	*/
	
	return 0;
}