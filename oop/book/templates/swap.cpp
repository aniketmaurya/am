#include<iostream>
using namespace std;

template<class T>
void swap(T x,T y)
{
	cout<<"initia values are "<<x<<" and "<<y<<endl;
	T temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"swapped values are "<<x<<" and "<<y<<"\n\n";
}
int main()
{
	swap(5,6);
	
	swap(5.6,6.7);
	
	swap("'men in black'","'jab tak hai jaan'");
	
}
