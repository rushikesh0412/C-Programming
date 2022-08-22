#include <iostream>
using namespace std;

/*
	Templates in C++:
	-Template is simple and yet very powerful tool in C++
	-Template are the foundation of generic programming, which involves writing code in a way 
	that is independent of any particular type.
	-A template is a blueprint or formula for creating a generic class or a function.
	
	--2Types:
		-Function Template
		-Class Template
	
	--Function Template:
		-Function template are special functions that can operate with generic types.
		-This allows us to create a function template whose functioonality can 
		be adapted to more than one type or class without repeating the entire
		code for each type.
		-The simple idea is to pass data type as a parameter so that we don't 
		need to write same code for different data type.
		-We write a generic function that can be used for different data types.
		
*/
/*
template <typename T>
T add(T x, T y)
{
	return (x+y);
}
*/
template <typename T, typename U>
U add(T x, U y)
{
	return (x+y);
}

int main()
{
	cout<<"Addition of 2 integer numbers is: "<<add<int>(3.89,4.56)<<endl;
	//cout<<"Addition of 2 float numbers is: "<<add<float>(3.4f,4.8f)<<endl;
	//cout<<"Addition of 2 double numbers is: "<<add<double>(3.56f,4.82f)<<endl;
	
	return 0;
}