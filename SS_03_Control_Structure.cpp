#include <iostream>
using namespace std;

/* Simple control Structure:

	Conditional
		-if_elseif_else
		-if_else
		-Switch case
	Loops
		-for
		-while
		-do_while
		
	Functions:
*/
 
int main()
{
	
	int x;
	cout<<"Please enter a number: ";
	cin>>x;
	
	if(x<0)
	{
		cout<<"Negative Number"<<endl;
	}
	else
	{
		cout<<"Positive Number"<<endl;
	}
	
	cout<<"Second Stucture: "<<endl;
	if(x==0)
	{
		cout<<"Given number is 0"<<endl;
	}
	else if(x<0)
	{
		cout<<"Negative Number"<<endl;
	}
	else
	{
		cout<<"Positive Number"<<endl;
	}
	
	
	
	return 0;
}