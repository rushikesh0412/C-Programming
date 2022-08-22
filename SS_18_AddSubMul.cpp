#include <iostream>
using namespace std;


int main()
{
	int A[3];
	int B[3];
	int add[3], sub[3], mul[3];
	
	cout<<"Enter 3 integers for array A: ";
	for(int i=0; i<3; i++)
	{
		cin>>A[i];
	}
	
	cout<<"\nEnter 3 integer for array B: ";
	for(int i=0; i<3; i++)
	{
		cin>>B[i];
	}
	
	cout<<"\nAddition of A and B is: ";
	for(int i=0; i<3; i++)
	{
		add[i] = A[i]+B[i];
		cout<<add[i]<<" ";
	}
	
	cout<<"\nSubstraction of A and B is: ";
	for(int i=0; i<3; i++)
	{
		sub[i] = A[i]-B[i];
		cout<<sub[i]<<" ";
	}
	
	cout<<"\nMultiplication of A and B is: ";
	for(int i=0; i<3; i++)
	{
		mul[i] = A[i]*B[i];
		cout<<mul[i]<<" ";
	}
	
	
	return 0;
}
