#include<stdio.h>	//%x= hexadecimal representataion of unsigned integer
//%u is unsigned integer
main()
{
	int i;
	printf("%x\n",&i);	//will print adress in hexadecimal
	printf("%u\n",&i);	//will print adress in unsigned int
	printf("%d\n",&i);	//will print adress in decimal
	printf("%d\n",i);
	
}