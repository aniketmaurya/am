#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("abcd.txt","w");
	fputc('h',p);
	fputc('i',p);
	fclose(p);
	
	
	
	
	
	
}