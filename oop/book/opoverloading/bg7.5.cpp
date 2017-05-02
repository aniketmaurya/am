#include<iostream>
using namespace std;
class arr
{
	int a[5];
public:
	arr(int *ptr=0)
	{
		int i;
		for(i=0;i<5;i++)
			a[i]=ptr[i];
	}
	int operator[] (int k)
	{
		return (a[k]);
	}
	void display()
	{
		int i;
		for(i=0;i<5;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
	}
};
main()
{
	int x[]={1,3,4,6,8};
	arr ob(x);
	ob.display();
	cout<<ob[4];
}