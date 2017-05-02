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
	struct student s2;
	struct student s1={31,'A',"aniket"};
	
	printf("roll is %d\tsection is %c\tname %s\n",s1.roll,s1.sec,s1.name);

	
	
}