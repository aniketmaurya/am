#include<iostream>
using namespace std;
class FixedDeposit
{
	float principle,time,rate;
	public:
	FixedDeposit()
	{
		principle=0;
		time=0;
		rate=0;
	}
	FixedDeposit(float a,float b,float c)
	{
		principle=a;
		time=b;
		rate=c;
	}
	float cal(){
		int si=0;
		si=principle*(1+rate/100*time);
		cout<<"S.I. is "<<si<<endl;
		
	}
};
int main(){
	FixedDeposit f(1000,2,5);
	f.cal();
}