#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter the number to calculate its factorial: ";
	int x, fact, temp;
	cin>>x;
	temp = x;   			//temp = 5;
	fact = x;   			//fact = 5;
	while(x>1)
	{
		x--;    			// x = 4;
		fact = fact *x; 	//fact = 5 *4;
	}
	
	cout<<"factorial of "<<temp<<" is "<<fact<<endl;
	
	return 0;
}