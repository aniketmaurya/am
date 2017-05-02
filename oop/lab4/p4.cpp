#include<iostream>
using namespace std;
class time{
	int hh,mm,ss;
	public:
	time(){
		int h,m,s;
		cout<<"enter time hh:mm:ss\n";
		hh=h;
		mm=m;
		ss=s;
	}
	friend void add(time,time);
};
void add(time a,time b)
{
	a.hh=a.hh+b.hh;
	
}
void add(){
	
}
int main()
{	
	
	time t1,t2;
	
}