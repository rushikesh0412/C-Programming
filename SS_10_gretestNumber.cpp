#include <iostream>
using namespace std;

int main()
{
	cout<<"Lasrgest of 3 numbers"<<endl;
	int x,y,z;
	
	cout<<"Enter 3 numbers: ";
	cin>>x>>y>>z;
	
	cout<<"Logic 1 : "<<endl;
	if((x>y) && (x>z))
	{
		cout<<x<<" is the gretest number"<<endl;
	}
	else if((y>x) && (y>z))
	{
		cout<<y<<" is the gretest number"<<endl;
	}
	else
	{
		cout<<z<<" is the gretest number"<<endl;
	}
	
	cout<<"logic 2: "<<endl;
	if(x>y)
	{
		if(x>z)
		{
			cout<<x<<" is the gretest number"<<endl;
		}
		else
		{
			cout<<z<<" is the gretest number"<<endl;
		}
	}
	else
	{
		if(y>z)
		{
			cout<<y<<" is the gretest number"<<endl;
		}
		else
		{
			cout<<z<<" is the gretest number"<<endl;
		}
	}
	return 0;
}