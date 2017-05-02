#include<stdio.h>		//converting all strings to capital letter
#include<string.h>
void convert(char p[],int n);
main()
{
	char ch[10];
	int n;
	printf("enter the string to convert into CAPITAL.\n\n");
	gets(ch);
	n=strlen(ch);
	convert(ch,n);
	printf("converted\n\n");
	puts(ch);
}
void convert(char p[], int n)
{
	int i=0;
	for(i=0;i<=n;i++)
		if((p[i]>='a')&&(p[i]<='z'))
			p[i]=p[i]-32;
}