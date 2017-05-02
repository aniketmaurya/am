#include<iostream>
#include<string.h>
using namespace std;
class string
{
	char *p;
	int len;
public:
	string()
	{
		len=0;
		p=NULL;
	}
	string(const char *s)
	{
		len=strlen(s);
		p= new char[len+1];
		strcpy(p,s);
	}
	string(const string &s)
	{
		len=s.len;
		p=new char[len+1];
		strcpy(p,s.p);
	}
	~string(){delete p;}
	
	void show()
	{
		cout<<endl<<p<<endl;
	}
};
int main()
{
	string s1;
}
