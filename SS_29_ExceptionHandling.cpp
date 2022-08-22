#include <iostream>
using namespace std;

/*

	--Exception handling in C++
		--An exception is an unexpected problem that arises during the execcution 
		of a program.
	--Exception handling mechanism provide a way to transfer control from one part 
	of a program to another. This makes it easy to seperate the error handling code
	from the code written to handle the actual functionality of the program.
	
	--C++ exception handling is built upon three keywords: try, catch & throw.
	
	
	try:
		A block of code which may cause an exception is typically placed inside the try 
		block. it's followed by one or more catch block. If an exception occurs, it is thrown from the try block.
		
	catch:
		This block catches the exception thrown from the try block. Code to 
		handle the exception is written inside this catch block.
		
	throw:
		A program throws an exception when a problem shows up. This is done using a 
		throw keyword.
		
	--Every try catch should have a corresponding catch block. A single try block
	can have multiple catch block.
		
*/

int main()
{
	int numerator, denominator, result;
	cout<<"Enter the numerator value: ";
	cin>>numerator;
	cout<<"Enter the denominator value: ";
	cin>>denominator;
	
	try
	{
		if(denominator == 0)
		{
			throw denominator;
		}
		result = numerator/denominator;		//division happen here
	}
	catch(int ex)
	{
		cout<<"Division : Divide by zero not allowed "<<ex<<endl;
	}
	
	cout<<"Division is: "<<result<<endl;
	
	return 0;
}