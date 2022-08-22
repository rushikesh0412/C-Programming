#include <iostream>
using namespace std;

/*
Complex number
real part
imaginary part

comp1 - 5 + 6i
comp2 - 3 + 4i
comp3 - (5+3) + (6+4)i

*/
class ComplexNumber
{
	private:
		//data members
		int real;
		float imaginary;
		
	public:
		ComplexNumber()
		{
			
		}
		ComplexNumber(int r, int i)
		{
			real = r;
			imaginary = i;
		}
		int getRealPart()
		{
			return real;
		}
		int getImaginaryPart()
		{
			return imaginary;
		}
		void displayData()
		{
			cout<<"Complex Number is: "<<real<<" + "<<imaginary<<"i"<<endl<<endl;
		}
};
ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2)
{
	int r;
	float i;
	r = n1.getRealPart() + n2.getRealPart();
	i = n1.getImaginaryPart() + n2.getImaginaryPart();
	
	ComplexNumber temp(r,i);
	
	return temp;
	
}
int main()
{
	ComplexNumber comp1(5,4), comp2(2,3), comp3;
	
	comp1.displayData();	//5 + 4i
	comp2.displayData();	//2 + 3i
	
	comp3 = add2number(comp1 , comp2);
	cout<<"Addition of comp1 and comp2: "<<endl;
	comp3.displayData();	
	
	cout<<"Pointer to Object: "<<endl;
	ComplexNumber *ptr1;
	ptr1 = &comp3;
	ptr1->displayData();
	
	cout<<endl;
	ptr1 = &comp2;
	ptr1->displayData();
	
	cout<<ptr1; 	//What does pointer have
	
	
	
	return 0;
}