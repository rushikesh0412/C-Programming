#include <iostream>
using namespace std;


/*
		-Default Parameters in Function:
			-A default argument is a value provided in function declaration that is
			automatically assigned by the compiler if caller of the function doesn't 
			provide a value for the argument with default value.
			
			-Allows a function to be called without providing one or more trailing 
			arguments.
			
			
			int sum(int x, int y, int z=0, int w = 0)
			{
				return (x+y+z+w);
			}
*/


int sum(int x, int y, int z=0, int w=5) //default parameters should starts from right to left
{
	
	return (x+y+z+w);
}
int main()
{
	
	cout<<"Sum of 1,2 is: "<<sum(1,2)<<endl;
	cout<<"Sum of 1,2,3 is: "<<sum(1,2,3)<<endl;
	cout<<"Sum of 1,2,3,4 is: "<<sum(1,2,3,4)<<endl;
	
	return 0;
}