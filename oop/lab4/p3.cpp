#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
	void getdata(){
		cout<<"enter a";
		cin>>a;
	}
	void display(){
		cout<<"a="<<a;
	}
	friend void swap(A&,B&);
};
class B{
	int b;
	public:
	void getdata(){
		cout<<"enter b";
		cin>>b;
	}
	void display(){
		cout<<"\nb="<<b;
	}
	friend void swap(A&,B&);
};
void swap(A& x,B& y){
	int t;
	t=x.a;
	x.a=y.b;
	y.b=t;
	
}
int main(){
	A obj1;
	B obj2;
	obj1.getdata();
	obj2.getdata();
	swap(obj1,obj2);
	obj1.display();
	obj2.display();
}