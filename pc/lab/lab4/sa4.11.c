#include<stdio.h>   //pattern printing 
	
int main()

{


int n,i,j;


printf("input\n\n");
scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	printf("\n");
	}

}
