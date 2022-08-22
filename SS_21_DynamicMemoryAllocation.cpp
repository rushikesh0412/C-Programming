#include <iostream>
using namespace std;

/*
	-Dynamic memory allocation in C++
		DMA allows you to set array size dynamically during run time rather than 
		at compile time. This help when the program doesn't know in advance about 
		the number of items(variable values) to be store.
*/

int main()
{
	int size;
	int *ptr;
	
	cout<<"Enter number of values you want to store (size of array): ";
	cin>>size;
	
	ptr = new int[size];
	cout<<"Enter values to be stored in the array: "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>ptr[i];
	}
	cout<<"Values of the array are: "; 
	for(int i=0; i<size; i++)
	{
		cout<<ptr[i]<<" ";
	}
	
	return 0;
}