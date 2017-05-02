#include<iostream>
using namespace std;

class Complex
{
	float real,imag;
	
	public:
	Complex(){}
	void set()
	{	
		float x,y;
		cout<<"enter x and y";
		cin>>x>>y;
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
	Complex c1,c2,c3;
	c1.set(2,5);
	c2.set(7,3);
	c3.set(0,0);
	//c3 = c1.add(c2);
	c1.display();
	c2.display();
	c3.display();
}
