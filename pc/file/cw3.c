#include<stdio.h>
main()
{
	FILE *p,*q;
	char ch,c;
	p=fopen("abcd.txt","w");
	fputc('h',p);
	fputc('i',p);
	fclose(p);
	p=fopen("abcd.txt","r");
	q=fopen("xyz.txt","w");
	
	while((ch=fgetc(p)!=EOF))
		fputc(ch,q);
	
	
	
	printf("%c%c\n",ch,c);
	
	
}