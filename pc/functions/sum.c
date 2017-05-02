#include<stdio.h>
int sum(int x, int y);

int main()
{
	int c, a,b;
	printf("\nenter the nos.\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("\n%d\n",c);
	
}
int sum(int x, int y)
{
	return x+y;
	
}