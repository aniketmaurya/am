#include<iostream>
using namespace std;
class shape
{
	protected:
	float area;
	
	
};

class rectangle: public shape
{	
	float l,b;
	public:
	void data()
	{
		cout<<"enter length and breath\n";
		cin>>l>>b;
		cout<<endl<<"area  of  rectangle is  "<<(area=l*b)<<endl;
		
	}
	
	
};

class triangle : public shape
{	
	protected:
	float b,h;
	public:
	void data()
	{
		cout<<"enter hieght and base\n";
		cin>>h>>b;
		cout<<endl<<"area  of  triangle is  "<<(area=0.5*h*b)<<endl;
	}
};

class  circle: public  shape
{
	protected:
	int r;
	
	public:
	void data()
	{
		cout<<"enter radius\n";
		cin>>r;
		cout<<endl<<"area  of  circle is  "<<(area=3.14*r*r)<<endl;
	}
};

int main()
{
	rectangle r;
	circle c;
	triangle t;
	shape s;
	int i;
	cout<<"enter your choice"<<endl<<"1. Circle\n2. Triangle\n3.  Rectangle"<<endl;
	cin>>i;
	switch(i)
	{
		case 1:c.data();break;
		case 2:t.data();break;
		case 3:r.data();break;
		default: cout<<"invalid "<<endl;
	}
}