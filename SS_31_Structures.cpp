#include <iostream>
using namespace std;

/*
	What are Structures?
	
	--A Structure in C++ is a group of data elements grouped together under one name.
	These data elements, known as members, can have different types and different length.
	It is a user defined data type which allows you to combine data items of different
	kinds.
	--Structure are user-defined data types.


*/


struct Person{
	char name[100];
	int age;
	double salary;
	
};

int main()
{
	Person p1;
	cout<<"person details: "<<endl;
	cout<<"Enter person name: ";
	cin.getline(p1.name, 100);
	cout<<"Enter Age: ";
	cin>>p1.age;
	cout<<"Enter Salary: ";
	cin>>p1.salary;
	
	
	cout<<"Person Details: "<<endl;
	cout<<"Name\t\t"<<"Age\t"<<"Salary\t"<<endl;
	cout<<p1.name<<"\t"<<p1.age<<"\t"<<p1.salary<<endl;
	
	return 0;
}