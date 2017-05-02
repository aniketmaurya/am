#include<iostream>
using namespace std;

class bank
{
	string name;
	int ac;
	string type;
	float bal;
	
	void  setvalue(bank p);
	
	public:
};

void bank::setvalue(bank p)
{
		cout<<"enter name"<<endl;
		cout<<"enter acc no."<<endl;
		cin>>p.name;
		cin>>p.ac;
}

int main()
{
	bank p1;
	p1.setvalue(bank & p1);
}