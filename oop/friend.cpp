#include<iostream>
using namespace std;

class Rectangle
{
	int height,base;
	
	public:
	void set(int x,int y)
	{
		height = x;
		base = y;
	}
	friend void display(Rectangle &);
	
};
void display(Rectangle& r)
{
	cout<<"height of the rectagle is "<<r.height<<endl<<"base of the rectangle is "<<r.base<<endl<<"area is "<<r.height*r.base<<endl;
}

int main()
{
	Rectangle r;
	r.set(5,10);
	display(r);
}