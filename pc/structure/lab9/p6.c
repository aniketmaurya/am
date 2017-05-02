#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee
{
	int id;
	int bsalary;
	char name[50];
	int gsalary;
};

int main()
{
	struct employee e1,e2;
	printf("please enter name of the employee\n");
	gets(e1.name);
	gets(e2.name);
	
	printf("enter the basic salary of ");
	puts(e1.name);
	scanf("%d",&e1.bsalary);
	
	printf("enter the basic salary of ");
	puts(e2.name);
	scanf("%d",&e2.bsalary);
	
	e1.gsalary= e1.bsalary + 80/100*(e1.bsalary) + 15/100*(e1.bsalary);
	e2.gsalary= e2.bsalary + 80/100*(e2.bsalary) + 15/100*(e2.bsalary);
	
	printf("name ");
	puts(e1.name);
	printf("\ngross salaray is %d \n\n\n",e1.gsalary);
	
	printf("name ");
	puts(e2.name);
	printf("\ngross salaray is %d\n\n\n",e2.gsalary);
	
	
	


	
	
}