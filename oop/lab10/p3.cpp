#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		if (x==0)
			throw x;
		if (x==1)
			throw 'x';
		if (x==-1)
			throw 1.5;
		else throw "fck";
	}
	catch (int n)
	{
		cout<<"caught an integer "<<n<<endl;
	}
	catch (char n)
	{
		cout<<"caught a char "<<n<<endl;
	}
	catch (double n)
	{
		cout<<"caught a double "<<n<<endl;
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