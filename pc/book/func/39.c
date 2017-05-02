#include<stdio.h>		//reverse of string and pchlindrome
void  strpal(char[]);
main()
{
	char ch[50];
	printf("enter the string\n");
	gets(ch);
	strpal(ch);
	printf("\nchecking...\n");
	puts(ch);
}
void strpal(char ch[])
{
	int i=0,j=0,n=0;
	
	while(ch[n]!='\0')
		n++;
	
	for(i=0;i<=n/2;i++)
	{
		if(ch[i]==ch[i-n-1])
			j=1;
		else j=0;
	}
	if(j==1)
		printf("palindrome\n");
	else
	{
		for(i=0;i<=n/2;i++)
		ch[i]=ch[i-n-1];
	}
}