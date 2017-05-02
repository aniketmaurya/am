#include<iostream>
using namespace std;
class A
{
	int a,b,c;
	public:
	void out(void)
	{
		cout<<a<<endl<<b<<endl<<c<<endl;
		
	}
	A()
	{
		a=5,b=4,c=9;
	}
};
int main()
{	A abc;
	abc.out();
	//cout<<abc.x<<abc.y<<abc.z<<endl;
}