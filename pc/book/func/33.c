#include<stdio.h>		//sum of digit of two no.
int sum(int,int);
main()
{
	int a,b;
	printf("enter the two no.s\n");
	scanf("%d\n%d",&a,&b);
	printf("sum of two nos. are %d\n\n",sum(a,b));
	return 0;
}
int sum(int a, int b)
{
	return a+b;
}