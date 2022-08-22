#include <iostream>
using namespace std;

class MyBaseClass{
	
	public:
		int x;
		MyBaseClass()
		{
			x=5;
			y=5;
			z=5;
		}
		void printProtectedData()
		{
			cout<<"Y: "<<y<<endl;
		}
	protected:
		int y;
	private:
		int z;
};
class MyDerivedClass: public MyBaseClass{
	/*
		public int x;
		protected int y
		
	*/
};
class MyDerivedClass3 : public MyDerivedClass{
	
};

void myOutsideFunction(MyBaseClass obj)
{
	//cout<<"X: "<<obj.x<<endl;
	//obj.printProtectedData();
	//cout<<"Z: "<<obj.z<<endl;
}

int main()
{
	MyBaseClass obj1;
	cout<<"X: "<<obj1.x<<endl;
	//cout<<"Y: "<<obj1.y<<endl;	//Not accesible out side the class
	//cout<<"Z: "<<obj1.z<<endl;	//Not accesible out side the class
	
	
	cout<<"Derived class 2"<<endl;
	MyDerivedClass obj2;
	cout<<"X: "<<obj2.x<<endl;
	//cout<<"Y: "<<obj2.y<<endl;	//Not accesible	
	
	
	cout<<"Derived class 3"<<endl;
	MyDerivedClass3 obj3;
	cout<<"X: "<<obj3.x<<endl;
	//cout<<"Y: "<<obj3.y<<endl;		//Not accesible
	
	myOutsideFunction(obj1);
	
	return 0;
} 