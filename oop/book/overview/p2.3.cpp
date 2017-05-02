#include<iostream>
using namespace std;
int main()
{
	int a,b;
	a=5,b=10;
	swap(a,b);
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	
}
void swap(int& x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}