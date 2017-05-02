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
	struct student s1,s2,s3,s4,s5;
	printf("please enter name of the student\n");
	
	gets(s1.name);
	gets(s2.name);
	gets(s3.name);
	gets(s4.name);
	gets(s5.name);
	
	printf("enter the roll no. of ");
	puts(s1.name);
	scanf("%d",&s1.roll);
	
	printf("enter the roll no. of ");
	puts(s2.name);
	scanf("%d",&s2.roll);
	
	printf("enter the roll no. of ");
	puts(s3.name);
	scanf("%d",&s3.roll);
	
	printf("enter the roll no. of ");
	puts(s4.name);
	scanf("%d",&s4.roll);
	
	printf("enter the roll no. of ");
	puts(s5.name);
	scanf("%d",&s5.roll);
	
	



	
	
}