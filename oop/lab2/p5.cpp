#include<iostream>
using namespace std;
int main()
{
	int a,b,s=0,n,i;
	cout<<"enter no. of terms;";
	cin>>n;
	a=0,b=1;
	cout<<a<<"\t"<<b<<"\t";
	for(i=n-2;i>=1;i--)
	{
		s=a+b;
		b=s;
		a=b;
		cout<<s<<"\t";
	}
}