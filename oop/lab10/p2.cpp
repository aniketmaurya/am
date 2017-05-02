#include<iostream>
#include<string>
using namespace std;

 void divide(int a, int b, int c)
 {
	if ((b-c)!=0)
	{
		int result=a/(b-c);
		cout<<"there was no exception \nresult is "<<result<<endl;
	}
	if((b-c)==0)
		throw ("error ho gya re\n");
	
 }
 int main()
 {
	int x,y,z;
	cout<<"enter x y and z";
	cin>>x>>y>>z;
	try
	{
		cout<<"in try block\n";
		divide(x,y,z);
		cout<<"ye na chalega beta";
	}
	catch (const char * ch)
	{
		cout<<"exception detected\n"<<ch<<endl;
	}
 }