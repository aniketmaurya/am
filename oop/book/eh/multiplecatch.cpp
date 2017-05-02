//multiple catch statement
#include<iostream>
#include<string>
using namespace std;

class myexception
{
private:
	int exno;
	string exmsg;

public:
	myexception(int errno, string errmsg)
	{
		exno=errno;
		exmsg=errmsg;
	}
	void show()
	{
		cout<<"error msg is "<<exno<<endl<<exmsg<<endl;
	}
};
void exgen()
{
	try{
		cout<<"inside exgen try block\n";
		errr(55,"singh is king");
		cout<<"press 1, 2, 3 amd 4 for int char myexception and string";
		int reply;
		cin>>reply;
		switch(reply){
			case 1: throw 10;break;
			case 2: throw 'a';break;
			case 3: throw errr;break;
			case 4: throw "hsdlf\n";
		}
		
	}
	catch(int x){cout<<"int catch "<<x<<" is caught\n";}
	catch(char a){cout<<"char catch "<<a<<" is caught\n";}
}