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
	Person p[10];
	
	cout<<"Enter Persons Details: "<<endl<<endl;
	
	for(int i=0; i<2; i++)
	{
		cout<<"Detail of person "<<(i+1)<<endl;
		cout<<"Name: ";
		cin>>p[i].name;
		cout<<"Age: ";
		cin>>p[i].age;
		cout<<"Salary: ";
		cin>>p[i].salary;
	}
	
	cout<<endl<<endl;
	cout<<"Persons Details: "<<endl;
	cout<<"Name\t\t"<<"Age\t"<<"Salary\t"<<endl;
	for(int i=0; i<2; i++)
	{
		cout<<p[i].name<<"\t"<<p[i].age<<"\t"<<p[i].salary<<endl;
	}
	
	return 0;
}