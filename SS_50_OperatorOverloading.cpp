#include <iostream>
using namespace std;

class Weight{
	private:
		int kg;
	public:
		Weight()
		{
			kg = 0;
		}
		Weight(int x)
		{
			kg = x;
		}
		void printWeight()
		{
			cout<<"Weight in KG: "<<kg<<endl;
		}
		Weight operator ++()		//pre-increment object
		{
			Weight temp;
			temp.kg  = ++kg;
			return temp;
			
		}
		Weight operator ++(int)		//Post-increment object
		{
			Weight temp;
			temp.kg  = kg++;
			return temp;
		}
		
		Weight operator --()		//pre-decrement object
		{
			Weight temp;
			temp.kg  = --kg;
			return temp;
		}
		Weight operator --(int)		//Post-decrement object
		{
			Weight temp;
			temp.kg  = kg--;
			return temp;
		}
};
int main()
{
	/*
	int x = 0, y = 0;
	
	y = x++;
	cout<<y<<endl;	//0
	cout<<x<<endl;	//1
	*/
	
	
	Weight obj;
	obj.printWeight();
	
	++obj;
	obj.printWeight();		//obj.operator ++()
	
	obj++;					//obj.operator ++(int)
	obj.printWeight();
	
	--obj;
	obj.printWeight();		//obj.operator --()
	
	obj--;					//obj.operator --(int)
	obj.printWeight();
	
	
	Weight obj1, obj2;
	obj2 = ++obj1;
	obj2.printWeight();
	
	
	return 0;
}