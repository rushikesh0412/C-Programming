#include <iostream>
#include <fstream>
using namespace std;

/*
	--File Handling in C++
		--File are used to store data permanently.
		--A stream is an abstractrion that represents a device on which input and 
		output operations are performed.
		
		--A stream can basically be represented as a source or destination of 
		character of indefinite length.
	
	ofstream
	ifstream 
	fstream

*/



int main()
{
	
	//Write file
	char arr[100];
	cout<<"Enter your name and age: ";
	//cin>>arr;
	cin.getline(arr, 100);
	

	ofstream myfile("xyz.txt", ios::app);
	//ofstream myfile("xyz.txt", ios::out);
	//ofstream myfile("xyz.txt", ios::app| ios::out);
	
	myfile<<arr;
	
	myfile.close();
	cout<<"File write operation perform successfilly"<<endl<<endl;
	
	
	//Read file
	cout<<"Reading from file operation started"<<endl;
	char arr1[100];
	ifstream obj("xyz.txt");
	obj.getline(arr1, 100);
	cout<<"Array content: "<<arr1<<endl;
	cout<<"File read operation completed"<<endl;
	obj.close();
	
	
	return 0;
}