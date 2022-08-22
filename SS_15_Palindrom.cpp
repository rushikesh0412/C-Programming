#include <iostream>
using namespace std;

int main()
{
	int n, num, digit, rev = 0;
	cout<<"Enter a number to check if its palindrome or not: ";
	cin>>num;		//121
	n = num;
	while(num != 0)
	{
		digit = num%10;				//digit = 121%10 = 1 || 2 || 1
		rev = (rev*10) + digit;		//rev = (0*10)+1 = 1 ||(1*10)+2 =12 || (12*10)+1 = 121
		num = num/10;				//num = 121/10 = 12  ||12/10 = 1 || 1/10 = 0
	}
	
	if(n == rev)
	{
		cout<<"Palindrom Number"<<endl;
		
	}
	else
	{
		cout<<"Not Palindrom Number"<<endl;
	}
	
	return 0;
}