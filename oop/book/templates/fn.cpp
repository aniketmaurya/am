#include<iostream>
using namespace std;

template<class T>
void fnc(T x)
{
	cout<<"this is "<<x<<endl;
}
int main()
{
	fnc(5);
	fnc("fucking ");
	
}
