#include<iostream>
using namespace std;
const int size=3;

template<typename T>
class vector
{
	T *v;
	
public:
	vector()
	{
		v= new T[size];
		for(int i=0;i<size;i++)
			v[i]=0;
	}
	//vector(T *arr)
	void getdata(T arr[])
	{
		for(int i=0;i<size;i++)
			v[i]=arr[i];
	}
	T operator * (vector &u)
	{
		T sum=0;
		for(int i=0;i<size;i++)
			sum=sum+(this->v[i])*(u.v[i]);
		return sum;
	}
	void display (void)
	{
		for(int i=0;i<size;i++)
			cout<<v[i]<<"\t";
			cout<<endl;
	}
	
};
int main()
{
	int x[3]={1,2,3}, y[3]={35,2,5};
	vector <int> v1;
	vector <int> v2;
	v1.getdata(x);
	//v1=x;
	v2.getdata(y);
	//v2=y;
	cout<<"v1=  ";
	v1.display();
	cout<<"\nv2=  ";
	v2.display();
	cout<<"\n\nv1*v2=  ";
	cout<<v1*v2<<endl;
}