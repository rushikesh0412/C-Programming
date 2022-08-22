#include <iostream>
using namespace std;

int main()
{
	cout<<"Arithmetic operation Program"<<endl;
	int option;
	
	do
	{
		
		
		cout<<"0. exit"<<endl<<"1. Addition"<<endl<<"2. Substraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Modulus"<<endl;
		cout<<"Enter the operartion Number to perform the appropriate operation: ";
		cin>>option;
		int x, y;
		if(option != 0)
		{
			cout<<"Enter the value of x: ";
			cin>>x;
			cout<<"Enter the value of y: ";
			cin>>y;
		}
		
		switch(option)
		{
			case 0:
				return 0;
				break;
			case 1:
				cout<<"The Addition of "<<x<<" and "<<y<<" is "<<(x+y)<<endl;
				break;
			case 2:
				cout<<"The Substraction of "<<x<<" and "<<y<<" is "<<(x-y)<<endl;
				break;
			case 3:
				cout<<"The Multiplication of "<<x<<" and "<<y<<" is "<<(x*y)<<endl;
				break;
			case 4:
				cout<<"The Division of "<<x<<" and "<<y<<" is "<<(x/y)<<endl;
				break;
			case 5:
				cout<<"The Modulos of "<<x<<" and "<<y<<" is "<<(x%y)<<endl;
				break;
			default:
				cout<<"Oops Invalid option!"<<endl;
				break;
				
		}
	}while(option != 0);
	
	return 0;
}