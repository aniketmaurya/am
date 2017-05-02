#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{  // This works fine:
   char myStr[] = "text";
   myStr[0] = 'n';
   cout << myStr << endl;

   // This does not work:
   const char* myStr2 = "text";
   //myStr2[0] = 'n';         // This line results in a runtime error!!!
   cout << myStr2 << endl;

	string mystr3="text";
	mystr3[0]='n';
	cout<<mystr3;
   return 0;
}
