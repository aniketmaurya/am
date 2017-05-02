#include<iostream>
using namespace std;
class BankAccount{
	string name;
	int no,bal;
	public:
	void createacc(){
		cout<<"enter name, balance and acc. no."<<endl;
		cin>>name>>bal>>no;
	}
	void display(){
		cout<<name<<endl<<"balance"<<bal<<endl<<"acc no"<<no<<endl;
	}
	void deposit(){
		int x;
		cout<<"enter amount to deposit\n";
		cin>>x;
		bal=bal+x;
		cout<<"new balance is "<<bal<<endl;
	}
	void withdraw(){
		int x;
		cout<<"enter amount to withdraw\n";
		cin>>x;
		bal=bal-x;
		cout<<"new balance is "<<bal<<endl;
	}
};
int main()
{
	int n;
	BankAccount a;
	a.createacc();
	cout<<"\nselect\n1.Deposit\n2.withdraw\n3.display\n";
	cin>>n;
	switch(n){
		case 1:a.deposit();break;
		case 2:a.withdraw();break;
		case 3:a.display();break;
	}
	
	
	
	
}