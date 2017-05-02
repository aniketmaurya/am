#include<iostream>
using namespace std;
class space
{
	int x,y,z;
public:
	void display()
	{
		cout<<endl<<x<<endl<<y<<endl<<z<<endl;
	}
	friend istream & operator >>(istream &input, space & S);
};

istream & operator >> (istream &input, space &S)
{
	cout<<"enter x y and z";
	cin>>S.x>>S.y>>S.z;
}
int main()
{
	space A;
	cin>>A;
	A.display();
}