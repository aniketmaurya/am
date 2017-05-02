#include<iostream>

using namespace std;
int main()
{
	char ch;
	cout<<"enter the character"<<endl;
	cin>>ch;
	if(ch>='A'&&ch<='Z')
		cout<<"Uppercase"<<endl;
	else if(ch>='a'&&ch<='z')
		cout<<"lowercase"<<endl;
	else cout<<"special character"<<endl;
	
}