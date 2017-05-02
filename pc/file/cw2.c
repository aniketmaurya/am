#include<stdio.h>
main()
{
	FILE *p;
	char ch;
	p=fopen("abcd.txt","w");
	fputc('h',p);
	fputc('i',p);
	fclose(p);
	p=fopen("abcd.txt","r");
	ch=fgetc(p);
	printf("%c\n",ch);
}