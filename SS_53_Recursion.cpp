#include <iostream>
using namespace std;

/*
* Recursive Function in C++:

	-A function that calls itself is known as recursive function. And, this 
	technique is known as recursion. recursion is the process of repeating items in a 
	self-similar way.
	
	-This enables the function to repeat itself several times, outputting the result 
	and end of esach iteration.
	
	-The recursion continues until condition is met to prevent it.
	-To prevent infinite recursion, if...else statement (or similar approach) can be 
	used where one branch makes the recursive call and other doesn't.
	
* Advantages & Disadvantages of Recursive Function:
	
	- Recursion makes program elegant and cleaner. Most of the algorithms can be defined
	recursively which makes it easier it easier to visualize and prove.
	
	- If the speed of the program is vital then, yo should avoid using recursion.
	Recursions use more memory and are generally slow. Instead, you can use loops.
	
	--For the most part recursion is slower, and takes up more of the stack as well.
	The mai advantage of recursion is that for problems like tree traversal it make 
	the algorithm a little easier or more "elegant". 
	 
*/
/*
int Fact(int num)
{
	if(num > 1)
	{
		return (num * sum(num-1));	//sum() function call itself
	}
	else 
	{
		return num;
	}
}
	
	 
int main()
{
	
	cout<<"Factorial : "<<Fact(5)<<endl;
	
	return 0;
}
*/

int sum(int num)
{
	if(num != 0)
	{
		return (num + sum(num - 1));	//sum() function call itself
	}
	else
	{
		return num;
	}
}
int main()
{
	int n;
	cout<<"Enter number till which you want the sum of natural number to be calculated: ";
	cin>>n;
	int total = sum(n);
	cout<<"Sum of natural number from 1 to "<<n<<" are: "<<total<<endl;
	
	return 0;
}