#include <iostream>
using namespace std;


/*
Pass by value:

	-The call/pass by value method of passing arguments to a function copies 
	the actual value of an argument into the formal parameter of the function. 
	
	-In this case, chnages made to the parameter inside the function have no 
	effect on the argument.
	
	-By default , C++ uses call by value to pass arguments. In general, this 
	means that code within a function cannot alter the arguments used to call 
	the function.


*/


//call by value or pass by value
void passByValue(int x, int y)
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
	passByValue(a,b);
	
	cout<<"After Swapping: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	return 0;
}