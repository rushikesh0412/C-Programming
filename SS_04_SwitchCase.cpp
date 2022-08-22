#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a value between 1 to 7: ";
	cin>>num;
	
	switch(num)
	{
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tusday"<<endl;
			break;
		case 3:
			cout<<"Wenasday"<<endl;
			break;
		case 4:
			cout<<"Thusday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saterday"<<endl;
			break;
		case 7:
			cout<<"Sunday"<<endl;
			break;
		default:
			cout<<"Invalid Input!!"<<endl;
			break;
	}
	
	return 0;
}