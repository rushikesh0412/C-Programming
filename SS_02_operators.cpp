#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	
	
	//Arithmetic operators
	cout<<"Addition : "<<a+b<<endl;
	cout<<"Staraction : "<<a-b<<endl;
	cout<<"Multiplication : "<<a*b<<endl;
	cout<<"Division : "<<a/b<<endl;
	cout<<"Modulas(reminder) : "<<a%b<<endl;
	cout<<"pre-increment : "<<++a<<endl;
	cout<<"pre-decrement : "<<--b<<endl;
	cout<<endl;
	int c;
	//Assignment operators
	c = a+b;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
	
	
	cout<<(a+=b)<<endl;
	cout<<(a-=b)<<endl;
	cout<<(a*=b)<<endl;
	cout<<(a/=b)<<endl;
	cout<<(a%=b)<<endl;
	
	//Relational operators(==, !=, >, <, >=, <=)
	
	//Logical operators (&&, ||, !) 
	
	//Bitwise operator(&, |, ^, ~, <<, >>)
	
	//Misc Operators
	//sizeof
	//Condition? X:Y
	
	
	
	return 0;
}