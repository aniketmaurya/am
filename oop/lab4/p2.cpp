#include<iostream>
using namespace std;
class integer{
	int x;
	public:
	friend int fact(integer n);
	void getdata(){
		cout<<"enter value of x\n";
		cin>>x;
	}
};
int fact(integer n){
	int f=1,i;
	for(i=1;i<=n.x;i++)
		f=f*i;
	cout<<f<<endl;
}

int main(){
	integer a;
	a.getdata();
	fact(a);
}