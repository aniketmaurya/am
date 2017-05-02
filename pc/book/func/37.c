#include<stdio.h>		//concatenation
void adstr(char[],char[],int n1,int n2);
main()
{
	char a[10], b[10],c[50];
	int n1=0,n2=0;
	printf("enter  first string\n");
	gets(a);
	printf("enter 2nd string\n");
	gets(b);
	printf("\nconcatenating...\n\n");
	
	while(a[n1]!='\0')
		n1++;
	while(b[n2]!='\0')
		n2++;
	adstr(a,b,n1,n2);
	//c[50]=adstr(a,b,n1,n2);
}
void adstr(char a[], char b[],int n1,int n2)
{
	int i=0,j;
	char ch[50];
	
	for(i=0;i<=n1;i++)
		ch[i]=a[i];
	
	for(i=i-1,j=0;b[j]!='\0';i++,j++)
		ch[i]=b[j];
	ch[i]='\0';
	puts(ch);
	
	//return ch;
}