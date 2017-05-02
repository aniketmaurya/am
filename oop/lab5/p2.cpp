#include<iostream>
using namespace std;
class author
{
	public:
	string aname,publisher,qual;
	
};
class book: private author
{
	string bname,pages,price;
	public:
	void input(book&);
	void output(book& );
};
void book::input(book& b1)
{
	cout<<"enter book name>pages>price>author name>publisher>qualif."<<endl;
	cin>>bname>>pages>>price>>aname>>publisher>>qual;
}
void book::output(book& b2)
{
	cout<<bname<<endl<<pages<<endl<<price<<endl<<aname<<endl<<publisher<<qual<<endl;
}
int main()
{	
	author A;
	book B;
	cout<<"input fnctn is running"<<endl;
	B.input(B);
	cout<<endl<<"output fnctn is running"<<endl;
	B.output(B);
}
