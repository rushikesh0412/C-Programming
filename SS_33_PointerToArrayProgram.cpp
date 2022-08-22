#include <iostream>
#include <string>
using namespace std;

struct Person{
	string name;
	int age;
	double salary;
};

int main()
{
	Person p1;
	
	/*
	cout<<"Enter details of person as name, age, salary: "<<endl;
	cout<<"Name: ";
	cin>>p1.name;
	cout<<"Age: ";
	cin>>p1.age;
	cout<<"Salary: ";
	cin>>p1.salary;
	
	cout<<"Person Details: "<<endl;
	cout<<"Name\t\t"<<"Age\t"<<"Salary\t"<<endl;
	cout<<p1.name<<"\t"<<p1.age<<"\t"<<p1.salary<<endl;
	*/
	
	
	Person *ptr = &p1;
	
	cout<<"Enter details of person as name, age, salary: "<<endl;
	cout<<"Name: ";
	cin>>ptr->name;
	cout<<"Age: ";
	cin>>ptr->age;
	cout<<"Salary: ";
	cin>>ptr->salary;
	
	cout<<endl<<endl;
	
	cout<<"Person Details: "<<endl;
	cout<<"Name\t\t"<<"Age\t"<<"Salary\t"<<endl;
	cout<<ptr->name<<"\t"<<ptr->age<<"\t"<<ptr->salary<<endl;
	
	
	
	
	return 0;
}