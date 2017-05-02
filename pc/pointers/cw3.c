#include<stdio.h>		//%x= hexadecimal representataion of unsigned integer
//%u is unsigned integer
main()
{
	int *p,i;
	
	printf("printing address of i and *p %x\t%x\n",&i,&p);
	
	p=&i;		//address of i is assigned to p
	
	i=1000;
	
	printf("\nprinting i %d\n",i);
	
	printf("\nprinting address of p=&i= %x = %x\nscanning i and p\n",p,&i);
	
	scanf("%d",&i);
	
	scanf("%d",p);
	
	printf("\nprinting i %d\n",i);
	
	printf("printing p %d\n\n",*p);
	
}