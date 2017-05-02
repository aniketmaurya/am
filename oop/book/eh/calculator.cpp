#include<iostream>
using namespace std;

class calculator
{
	float a,b;
	char ch;
public:
	void myfn()
	{
		cout<<"enter the operation like: a+b a/b a-b a*b\n";
		cin>>a;
		cin>>ch;
		cin>>b;
		cout<<"\n\n**********************\n\n";
		switch(ch)
		{
			case '+': cout<<a+b;break;
			case '-': cout<<a-b;break;
			case '/':
				try
				{
					if(b==0)
						throw "can't divide by zero";
					else cout<<a/b;
				}
				catch(const char *c)
				{
					cout<<"\nerror detected "<<c<<endl;
				}
				break;
			case '*': cout<<a*b;
		}
	}
};

int main()
{
	calculator calc;
	calc.myfn();
	cout<<"\n\n**********************\n";
}














