#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	int roll;
	char name[50];
	char sec;
};

int main()
{
	int i,j,t;
	struct student s[5];
	printf("please enter name of the student\n");
	
	for(i=0;i<5;i++)
	gets(s[i].name);

	printf("enter the roll no. of ");
	
	for(i=0;i<5;i++)
	{	puts(s[i].name);
		scanf("%d",&s[i].roll);
	}
	
	for(i=0,j=i+1;i<5;i++)
	for(j=i+1;j<5;j++)
	{
		if(s[i].roll>s[j].roll)				//ascending
		{	t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
	}
}