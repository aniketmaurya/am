#include<iostream>
using namespace std;
int main()
{
	int n,f=1,i;
	cout<<"enter no."<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
		f=f*i;
	cout<<"factorial: "<<f<<endl;
	
}