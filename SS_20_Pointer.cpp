#include <iostream>
using namespace std;

/* 
	Pointer in C++

	Pointer is the variable whose value is the address of the another varaible.
	-Use
		- pointer allow you to refer to the same space in memory from multiple location.
		  This means that you can update memory in one location and the change can be seen 
		  from another location in your program. You will also save space by being able
		  to share components in your data structures.
		- Dynamic memory allocation
*/

int main()
{
	int var = 5;
	//datatype *pointername;
	int *ip;		//Pointer to an integer
	double *dp;		//Pointer to a double
	float *fp;		//Pointer to a float
	char *cp;		//Pointer to a character
	
	ip = &var;
	
	cout<<"Variable value: "<<var<<endl;
	cout<<"Address in pointer: "<<ip<<endl;
	cout<<"pointer Pointing to value: "<<*ip<<endl; 
	
	*ip = 6;
	cout<<endl;
	cout<<"Variable value: "<<var<<endl;
	cout<<"Address in pointer: "<<ip<<endl;
	cout<<"pointer Pointing to value: "<<*ip<<endl;
	
	return 0;
}