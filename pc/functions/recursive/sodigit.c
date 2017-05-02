#include<stdio.h>

int sum(int k);
int sum(int k)
{
	int s=0;
	if(k==0)
		return 0;
	else s=k%10 + sum(k/10);
	return s;
}
int main()

{
	int n,k;
	printf("enter the no. \n");
	scanf("%d",&n);
	
	printf("sum of the digits of %d is %d\n\n",n,sum(n));
	
	
	
}
