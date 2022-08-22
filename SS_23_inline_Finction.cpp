#include <iostream>
using namespace std;

/*
	-Inline Function in C++
		-Definition: If a finction is inline, the compiler places a copy of the 
		code of that function at each point where the function is called at compile time.
		
		-Any change to an inline function could require the function to be recompiled
		because compiler would need to replace all code once again otherwise it will 
		continue with old functionality
		
	-Syntax:
		inline return-type function-name(parameters){
			//function code
	}

*/


inline int add(int a, int b)
{
	return (a+b);
}
int main()
{
	
	cout<<"Addition of 4 and 5 is: "<<add(4,5)<<endl;
	
	return 0;
}