#include<iostream>
using namespace std;

class myexception
{
public:
	int Exno;
	string exmsg;
};
int main()
{
	try
	{
		cout<<"Inside try block\n";
		myexception e1;
		e1.Exno=20;
		e1.exmsg="lenovo";
		throw e1;
		cout<<"i dont know why the fck this will not work";
	}
	catch(myexception e)
	{
		cout<<"\ninside catch"<<e.Exno<<e.exmsg;
	}
}