//(complex) + operator overloading using friend fnctn
#include<iostream>
using namespace std;
class complex
{
	float x,y;
	public:
	complex(float a=0, float b=0)
	{
		x=a,y=b;
		}
	void display()
	{
		cout<<x<<" + "<<y<<" i\n";
	}
	friend complex operator+ (complex a, complex b);
};
complex operator+ (complex a, complex b)
{
	return complex((a.x+b.x),(a.y+b.y));
}
int main()
{
	complex c1(3,5),c2(7,3),c3;
	c1.display();
	c2.display();
	c3=c1+c2;
	c3.display();
}
