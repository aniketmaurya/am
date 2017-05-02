#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:
	rectangle(int ,int);
	void show()
	{
		cout<<l<<endl<<b<<endl;
	}
};
rectangle::rectangle(int x,  int y)
{
	l=x;
	b=y;
}

int main()
{
	rectangle a(553,2);
	a.show();
}