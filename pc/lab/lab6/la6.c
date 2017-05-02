#include<stdio.h>
int main()
{
	int a[10],i,j,ip,n;
	printf("\nenter the nos.\n");
	
	for(i=0;i<=5;i++)
		scanf("%d",&a[i]);
	
	printf("\nenter your search\n");
	scanf("%d",&n);
	
	for(i=0;i<=5;i++)
		if(n==a[i])
			ip=1;
		
		if(ip==1)
			printf("found\n");
		else printf("not found\n");
	
}