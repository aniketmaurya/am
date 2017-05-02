#include<iostream>
using namespace std;

class Complex
{
	float real,imag;
	
	public:
	Complex(float x=0,float y=0)
	{	
		real = x;
		imag = y;
	}
	void display()
	{
		cout<<endl<<real<<" + "<<imag<<" i \n";
	}
	Complex add(Complex c)
	{
		float treal,timag;
		treal = real + c.real;
		timag = imag+c.imag;
		return Complex(treal,timag);
	}
		
};

int main()
{
	Complex c1(2,5),c2(1,3.3),c3;
	c3 = c1.add(c2);
	c1.display();
	c2.display();
	c3.display();
}
