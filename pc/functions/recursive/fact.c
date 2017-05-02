#include<stdio.h>
int fact(int k);

int main()

{
	int n,k;
	printf("enter the no. \n");
	scanf("%d",&n);
	
	printf("factorial is %d\n\n",fact(n));
	
	
	
}
int fact(int k)
{
	int f=1;
	if(k==0)
		return 1;
	else f=k*fact(k-1);
	return f;
}