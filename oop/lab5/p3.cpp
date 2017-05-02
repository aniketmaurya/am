#include<iostream>
using namespace std;
class student
{	protected:
	int roll;
	string name,branch;
};
class marks : public student
{	protected:
	int sub1,sub2,sub3;
};
class result: public marks
{	protected:
	int totalmark,percent;
	public:
	void input(result& x)
	{
		cout<<endl<<"enter name and branch"<<endl;
		cin>>name;
		cin>>branch;
		cout<<"enter marks of sub 1 2 and 3"<<endl;
		cin>>sub1>>sub2>>sub3;
		totalmark=sub1+sub2+sub3;
		percent=totalmark/3;
	}
	void output(result& x)
	{
		cout<<endl<<"name and branch"<<endl;
		cout<<name<<endl;
		cout<<branch<<endl;;
		cout<<"marks of sub 1 2 and 3"<<endl;
		cout<<sub1<<endl<<sub2<<endl<<sub3<<endl;
		totalmark=sub1+sub2+sub3;
		percent=totalmark/3;
		cout<<"totalmarks is "<<totalmark<<endl;
	}
};

int main()
{
	student s;
	marks m;
	result r;
	r.input(r);
	r.output(r);
}
