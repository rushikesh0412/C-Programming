/*
	What is a constructor?
	--A constructor is a member function of a class which initializes objects of a class. In 
	C++, Constrctor is automatically called when object(instance of class) is created. It is 
	special member function of the class.
	
	
	How constrctor are different from a normal member function?
		A constrctor is different from normal function in following member function?
	--Constrctor has same name as the class itself 
	--Constructor don't have return type
	--A constructor is automatically called when an object is created.
	--If we do not specifya constructor, C++ compiler generated a default constructor 
	for us (expect not parameter and has an empty body).
	
	
	1. Defau;t Constructor
	2. Parameterized Constructor
	3. Copy Constructor
	
	
	What id Distructor?
	--Destroctor is a member function which destructs ir deletes an object.
	
	When is destructor called?
	--The function ends.
	--The program ends.
	--A block containing loacl variable ends.
	--A delete operator is called.
	
	How destructor are different from a normal member function?
	--Destructor have same name as the class preceded by a tilde(~).
	--Destructor don't take any argument and don't return anything(not even void).
*/

#include <iostream>
#include <string>		//include this for using string class
using namespace std;

class Cars{
	
	private:
		//member variables or data members
		//char companyname[50];
		string company_name;
		string model_name;
		string fuel_type;
		float mileage;
		double price;
	
	public:
		//Default construcctor
		Cars()
		{
			company_name 	= "Toyota";
			
			cout<<"Default Constructor called"<<endl;
		}
		//Parameterized constructor
		Cars(string cname, string mname, string ftype, float m, double p)
		{
			cout<<"Parameterized constructor called"<<endl;
			company_name 	= cname;
			model_name 		= mname;
			fuel_type 		= ftype;
			mileage			= m;
			price 			= p;
		}
		//Copy constructor
		Cars(Cars &obj)
		{
			cout<<"Copy constructor called"<<endl;
			company_name 	= obj.company_name;
			model_name 		= obj.model_name;
			fuel_type 		= obj.fuel_type;
			mileage			= obj.mileage;
			price 			= obj.price;
		}
		//member functions
		void setData(string cname, string mname, string ftype, float m, double p)
		{
			company_name 	= cname;
			model_name 		= mname;
			fuel_type 		= ftype;
			mileage			= m;
			price 			= p;
		}
		void displayData()
		{
			cout<<"Car Properties"<<endl<<endl;
			cout<<"Company Name\t"<<"Model Name\t"<<"Fuel Type\t"<<"Mileage\t\t"<<"Price\t"<<endl;
			cout<<company_name<<"\t\t"<<model_name<<"\t\t"<<fuel_type<<"\t\t"<<mileage<<"\t\t"<<price<<"\t"<<endl;
		}
		//Destructor
		~Cars()
		{
			cout<<"Destructor called"<<endl;
		}
};

int main()
{
	Cars car1, car2("Toyota", "Fortuner", "Diesel", 10, 3500000);	//Object are nothing but variables of type class
	
	car1.setData("Toyota", "altis", "petrol", 15, 1500000);
	car1.displayData();
	car2.displayData();
	
	Cars car3 = car1;	//copy constructor is called
	car3.displayData();
	
	
	return 0;
}

	