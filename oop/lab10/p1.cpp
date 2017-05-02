#include<iostream>
using namespace std;

template<typename T>
T maximum(T x[],int size)
{
	T max=x[0];
	for(int i=0;i<size;i++)
		if(max<x[i])
			max=x[i];
	return max;
}
int main()
{
	int a[3]={5,8,9};
	float b[5]={54.625,4,21.55};
	cout<<"maximum of arr a is "<<maximum(a,3)<<endl;
	cout<<"maximum of arr b is "<<maximum(b,5)<<endl;
}