#include<iostream>
using namespace std;
class space
{
	int x,y;
public:
	space(int a=0, int b=0)
	{
		x=a;y=b;
	}
	void display()
	{
		cout<<"X: "<<x<<"\tY: "<<y<<endl;
	}
	friend space operator- (space s);
};
space operator- (space s)
{
	s.x=-s.x;s.y=-s.y;
	return s;
}

int main()
{
	space s1(2,5);
	s1.display();
	s1=-s1;
	s1.display();
}