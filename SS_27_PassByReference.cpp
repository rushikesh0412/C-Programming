#include <iostream>
using namespace std;


/*
Pass By Reference:
	--The call/pass by reference method of passing arguments of a function 
	copies the reference of an argument into the formal parameters.
	
	--inside the function, the reference is used to access the actual argument 
	used in the call. This means that changes made to the parameter affect the 
	passed argument.
	
	--to pass the value by reference, argument reference is passed to the function
	just like any other value.
	
	
*/ 


//Call by reference / pass by reference
void passByReference(int &x, int &y)
{
	int z = x;
	x = y;
	y = z;
}
int main()
{
	int a=5, b =6;
	cout<<"Before swapping: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	//call function
	passByReference(a,b);
	
	cout<<"After Swapping: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	return 0;
}