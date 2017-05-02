#include<iostream>
using namespace std;
class space
{
	int x,y,z;
public:
	space(int a=0 ,int  b=0, int c=0)
	{
		x=a;y=b;z=c;
	}
	space operator- ()
	{
		x=-x;y=-y;z=-z;
		return space(x,y,z);
	}
	void display()
	{
		cout<<"\nx: "<<x<<"\ty: "<<y<<"\tz: "<<z<<endl;
	}
};

int main()
{
	space s1(3,5,7);
	s1.display();
	s1=(-s1);
	s1.display();
}