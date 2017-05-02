#include<iostream>

using namespace std;
int main()
{
	int n,s=0,r=0;
	cout<<"enter 3 digit no."<<endl;
	cin>>n;
	r=n/100;
	s=n%10;
	if((r==n%10)&&(s==n/100))
	{
		cout<<"palindrome"<<endl;
		
	}
	else
	{
		n=n/10;
		n=n%10;
		n=r+n*10+s*100;
		cout<<n<<endl;
	}
}