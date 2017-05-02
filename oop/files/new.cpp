#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("mf.txt",ios::in | ios::out);
//	cout<<"file created\n enter text:\n";
	string some,line;
	int c1=0,c2=0;
	char ch;
	
	file<<"aniket maurya\nfucks everyone";
	
	//ifstream file;
	//file.open("mf.txt");
	cout<<"\n\nreading charcters and no. of chars...\n";
	file.seekg(0,ios::beg);
	while(file)
	{
		
		file.get(ch);
		cout<<ch;
		c1++;
		if(ch=='\n')
			c2++;

	}
	cout<<endl<<c1-c2<<"\t"<<c2<<endl;
	
}