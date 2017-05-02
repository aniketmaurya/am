#include<iostream>
using namespace std;
class space
{
	int x,y;
public:
	space(int a=0, int b=0)
	{x=a;y=b;}
	
	friend istream & operator>> (istream& , space &);
	friend ostream & operator<< (ostream& ,space & );
};

istream & operator>>(istream& input, space &s)
{
	cout<<"enter the value of x and y";
	cin>>s.x>>s.y;
}
ostream & operator<<(ostream& output, space& s)
{
	cout<<"\n***printing details of class***\n"<<"x: "<<s.x<<"\n y:"<<s.y<<endl;
}
int main()
{
	space s1,s2;
	cin>>s1;
	cout<<s1;
}