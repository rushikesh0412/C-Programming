#include <iostream>
using namespace std;
/*
	Function in C++
	- Definition: A function in C++ is a group of program statement with a unique
	  name that perform a specific task.
	  -Functions are used to provide modularity & reusability to a program.
	  -By default every C++ program execution starts from the main() function.
	  -Depemding on the whether a function is predefined or created by user;
	   there are two types of function:
	   		*Library/ Predefied function
	   		*User-defined function
	   
	   return-type function_name(parameter list)
	   {
	   			//body of the function
	   }
	   
	   -Following are the components of C++ function
	   -Return Type:
	   		A function may return a value. The return_type is the data type of the 
	   		value the function retruns. Some functions perform operation without returning
	   		a value. in this case, the return_type is the keyword void.
	   		
	   -Fucntion Name: 
	   		This is the actual name of the function. The function name and the
			   parameter list together constiyute the function signature. To call
			   a function, its name is used. 
*/


int maximum(int a, int b);		//forward declaration

void printMessage()
{
	cout<<"Hello World!"<<endl;
}


int main()
{
	printMessage();
	
	int a, b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	
	c = maximum(a, b);			//function call
	cout<<"Maximum value is "<<c<<endl;
	
	return 0;
}
int maximum(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}