#include<stdio.h>	//%x= hexadecimal representataion of unsigned integer
//%u is unsigned integer
main()
{
	int i[5]={5,3,1,6,7};
	printf("%x\n",i);				//wil print address of variable i[0]
	printf("%x\n",i[1]);			//will print value at variable i[1]
	printf("%x\n",&i[0]);			//will print address of variable i[0]
	printf("%x\n",&i[1]);			//will print address of variable i[1]
	
	
}