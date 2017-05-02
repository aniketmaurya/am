#include<stdio.h>
int main()
{
	int a[10],b[10],i,j,ip,n;
	printf("\nenter the nos.\n");
	
	for(i=0;i<=5;i++)
		scanf("%d",&a[i]);
		
		for(i=0;i<=5;i++)
			b[i]=a[i];
		printf("Please wait...\nall items copied\n");
		
		for(i=0;i<=5;i++)
printf("\n%d\n",b[i]);
}