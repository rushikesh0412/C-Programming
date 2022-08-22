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
			cout<<"Company Name\t"<<"Model Name\t"<<"Fuel Type\t"<<"Mileage\t"<<"Price\t"<<endl;
			cout<<company_name<<"\t"<<model_name<<"\t"<<fuel_type<<"\t\t"<<mileage<<"\t\t"<<price<<"\t"<<endl;
		}
};

int main()
{
	Cars car1;	//Object are nothing but variables of type class
	car1.setData("Toyota", "altis", "petrol", 15, 1500000);
	car1.displayData();
	
	
	
	return 0;
}