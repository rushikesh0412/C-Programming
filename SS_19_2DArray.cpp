/*
	Q.) 2-D array initialization, take input, display output, addition, substraction

*/

#include <iostream>
using namespace std;

int main()
{
	//datatype arrayname[row][coloumn];
	int myarray[5][5];	//Declaration
	int myarray1[2][2] = {1,2,3,4};						//Declaration with initialization
	int myarray2[3][3] = {{1,1,1},{2,2,2},{3,3,3}};		//Declaration with initialization
	cout<<"Values of 3x3 matrix: "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<myarray2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	/*
	cout<<"Enter values for a 2x2 matrix: "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cin>>myarray1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Values of a 2x2 matrix: "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<myarray1[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	int A[2][2], B[2][2], addition[2][2], substraction[2][2];
	cout<<"Enter values of 2D array A: "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cin>>A[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Enter values of 2D array B: "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cin>>B[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Addition of 2D matrix: "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			addition[i][j] = A[i][j] + B[i][j];
			cout<<addition[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Substraction of 2D matrix: "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			substraction[i][j] = A[i][j] - B[i][j];
			cout<<substraction[i][j]<<" ";
		}
		cout<<endl; 
	}
	
	
	
	
	return 0;
}