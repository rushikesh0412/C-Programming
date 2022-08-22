#include <iostream>
using namespace std;


/*
Pass by Pointer or call by Address
	--The call by pointer method of passing arguments to a function copies the address of
	an argument into the formal parameter.
	
	--Inside the function, the address os used to access the actual argument used 
	in the call. This means that changes made to the parameter affect the passed argument.
	
	--To pass the value by pointer, argument pointer are passed to the function just like 
	any other value.

*/


void passByAddress(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
int main() 
{
	int a=5, b =6;
	cout<<"Before swapping: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	//call function
	passByAddress(&a,&b);
	
	cout<<"After Swapping: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	return 0;
}