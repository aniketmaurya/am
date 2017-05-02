#include<iostream>
using namespace std;

template <typename T1,typename T2>
class test
{
	T1 x;
	T2 y;
public:
	test(T1 a=0,T2 b=0)
	{
		x=a;
		y=b;
	}
	void show()
	{
		cout<<x<<" and "<<y<<endl;
	}
};
int main()
{
	test <int,float>t1(55,69.5);
	
	t1.show();
	test <string,float>t2("fckkk",69.5);
	
	t2.show();
}