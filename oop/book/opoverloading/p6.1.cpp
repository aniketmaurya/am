#include<iostream>
using namespace  std;
class complex
{
	float x,y;
	public:
	complex(float a=0,float b=0){x=a;y=b;}
	complex operator+ (complex c)
	{
		return complex((x+c.x),(y+c.y));
	}
	void display()
	{
		cout<<x<<" + "<<y<<" i\n";
	}
	
};
int main()
{
	complex c1(2,5),c2(8,2),c3;
	c3=c1+c2;
	c1.display();
	c2.display();
	cout<<"\nafter adding c1 and c2 we get:\n";
	c3.display();
}
