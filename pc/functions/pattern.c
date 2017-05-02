#include<stdio.h>   //pattern printing 
	void abc(int n);
	void abc(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
{
	printf("*");
}
	printf("\n");
}
}

int main()
{
	int k;
	printf("input\n\n");
	scanf("%d",&k);
	abc(k);


}