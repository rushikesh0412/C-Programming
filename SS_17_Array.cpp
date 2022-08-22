#include <iostream>
using namespace std;

/*
		An array is a series of elements of the same type placed in contiguous memory
	location that can be individually referenced by adding an index to a unique identifier.
*/
int main()
{
	int arr[3] = {1,2,3};
	double arr1[5];
	arr1[0] = 1.456;
	arr1[1] = 36.765;
	
	char myarr[4];
	myarr[0]  = 'a';
	
	int temp_arr[5];
	cout<<"Enter 5 integer variables: "<<endl;
	
	for(int i=0; i<5; i++)
	{
		cin>>temp_arr[i];
	}
	
	cout<<"You entered values are: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<temp_arr[i]<<endl;
	}
	
	return 0;
}