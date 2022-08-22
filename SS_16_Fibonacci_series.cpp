#include <iostream>
using namespace std;


/*
	Q. Write a fibonacci series e.g. 0 1 1 2 3 5 8 13 
*/
int main()
{
	int num, first =0, second = 1, next;
	cout<<"Enter the number of terms to be printed in the fibonacci series: ";
	cin>>num;
	
	for(int i = 0; i<num; i++)
	{
		cout<<first<<" ";		//first = 0|| 1 || 1 || 2
		next = first+second;	//next = 0+1 = 1|| 2
		first = second;			//fisrt = 1|| 1
		second = next;			//second = 1 || 2
	}
	
	return 0;
}