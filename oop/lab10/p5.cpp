#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		cout<<"inside try block"<<endl;
		throw "an exception is thrown ";
	}
	
	catch(...)
	{
		cout<<"\n in catch block.it handles all type of exception\n";
	}
}
int main()
{
	cout<<"in main\n\n";
	test(1);
	test(2);
	test(0);
	test(-1);
	
}