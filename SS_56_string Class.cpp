#include <iostream>
#include <string>
using namespace std;

// C++ String class


int main()
{
	cout<<"Enter a string: ";
	string obj1;
	//getline(cin,obj1);
	cin>>obj1;
	
	cout<<"String is "<<obj1<<endl;
	
	
	string obj = "Rushikesh Shinde";
	cout<<"Name is "<<obj<<endl;
	cout<<"String length is: "<<obj.length()<<endl;
	
	string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total length of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;
	
	
	return 0;
}