#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	int roll;
	char sec;
	char name[10];
};

int main()
{
	struct student s1,s2;
	s1.roll=20;
	s1.sec='a';
	strcpy(s1.name,"aniket");
	
	printf("%d\t%c\t%s\n",s1.roll,s1.section,s1.name);

	
	
}