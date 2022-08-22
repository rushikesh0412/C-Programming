#include <iostream>
using namespace std;

/*
	Class Template in C++:
	- Sometimes, you need a class implementation thatt is same for all classes, only 
	the data types used are different.
	-Normally, you would need to create a different class for each data typ OR create
	different member variable and functions within a single class.
	
	-In Class Templates We write a CLASS that can be used for different data types.



*/

template <typename T, typename U>

class Weight{
	private:
		T kg;
		U gram;
	public:
		void setData(T x, U y)
		{
			kg = x;
			gram = y;
		}
		T getKgData()
		{
			return kg;
		}
		U getGramData()
		{
			return gram;
		}
};

int main()
{
	Weight <int, double>obj1;
	obj1.setData(45, 0.78);
	
	cout<<"Weight in Kg is: "<<obj1.getKgData()<<endl;
	cout<<"Weight in Gram is: "<<obj1.getGramData()<<endl;
	
	/*
	Weight <double, float>obj2;
	obj2.setData(45.4568, 35.21);
	
	cout<<"Weight is: "<<obj2.getKgData()<<endl;
	*/
	
	return 0;
}